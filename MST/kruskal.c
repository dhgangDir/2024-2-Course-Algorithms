#include <stdlib.h>
#include <stdio.h>
#include "kruskal.h"
#include "union_find.h"

Queue *kruskal_mst(Queue* e, const int edge_num, const int v_num) {
    Queue *mst_e = (Queue *)malloc(sizeof(Queue));
    DataType rdata;
    Subset *subsets = (Subset *)malloc(sizeof(Subset) * v_num);
    int i, a, b;

    init_set(subsets, v_num);
    init_queue(mst_e);
    qsort(e->queue, edge_num, sizeof(DataType), compare); // 그래프 간선 정보 정렬

    while(count_queue(mst_e) < v_num - 1) {  // mst_e의 간선 수 < 정점의 개수 - 1
        rdata = dequeue(e);                  // e의 최소 가중치 간선
        // u, v 가 다른 집합(트리) 원소
        if ((a = find_compression(subsets, rdata->u)) != (b = find_compression(subsets, rdata->v))) {
            enqueue(mst_e, rdata);          // mst_e U {u, v, w}
            union_rank(subsets, a, b);      // 두 집합 합병
        }
    }
    free(subsets);
    return mst_e;
}