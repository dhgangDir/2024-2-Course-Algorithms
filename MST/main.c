#include <stdio.h>
#include <stdlib.h>
#include "array_queue.h"
#include "kruskal.h"

/* 무한을 INT32_MAX로 치환 : 다른 환경에서의 INT_MAX와 동치 */
#define INF INT32_MAX
/* 정점의 개수 */
#define MAX 9

/* 비용인접행렬에서 정점과 간선의 정보(u, v, w)로 묶어 큐 넣음 */
void convert_wam_q(Queue *pq, int (*wam)[MAX], int *edge_num) {
    int i, j;
    DataType d;
    for (i = 0; i < MAX; i++) {
        for (j = i + 1; j < MAX; j++) {
            if (wam[i][j] != INF) {
                d = get_edge(i, j, wam[i][j]);
                enqueue(pq, d);
                (*edge_num)++;
            }
        }
    }
}

int main() {
    /* 그래프 비용인접행렬 */
    int wam[MAX][MAX] = {
        {0, 4, INF, INF, INF, INF, INF, 8, INF},
        {4, 0, 8, INF, INF, INF, INF, 11, INF},
        {INF, 8, 0, 7, INF, 4, INF, INF, 2},
        {INF, INF, 7, 0, 9, 14, INF, INF, INF},
        {INF, INF, INF, 9, 0, 10, INF, INF, INF},
        {INF, INF, 4, 14, 10, 0, 2, INF, INF},
        {INF, INF, INF, INF, INF, 2, 0, 1, 6},
        {8, 11, INF, INF, INF, INF, 1, 0, 7},
        {INF, 4, 2, INF, INF, INF, 6, 7, 0}
    };
    
    /*
        i: for 문 인자.
        edge_num: 큐에 들어간 간선 정보 변수의 개수
        weight_sum: mst 가중치 합
    */
    int edge_num = 0, i, weight_sum = 0;
    /*
        q: 그래프 비용인접행렬을 정점과 간선 가중치 (u, v, w)로 가공된 데이터를 담는 큐
        mst: 최소 신장 트리를 구성하는 정점과 간성 가중치 (u, v, w)를 담는 큐
    */
    Queue *q = (Queue *)malloc(sizeof(Queue));
    Queue *mst = NULL;

    init_queue(q);
    convert_wam_q(q, wam, &edge_num);
    mst = kruskal_mst(q, edge_num, MAX);
    
    /* 최소 신장 트리의 정보를 출력하는 반복문 */
    for (i = 0; i < MAX - 1; i++) {
        printf("%d %d : %d\n",
                mst->queue[i]->u,
                mst->queue[i]->v,
                mst->queue[i]->weight);
        weight_sum += mst->queue[i]->weight;
    }
    
    printf("%d\n", weight_sum);

    return(0);
}