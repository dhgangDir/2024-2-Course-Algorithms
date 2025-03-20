#include "union_find.h"

/* subsets 초기화 */
void init_set(Subset *subsets, int size) {
    int i;
    /*  
        초기화 시,
        subset의 원소의 parent를 자신을 가리킴
        subset의 rank(높이)는 0
    */
    for (i = 0; i < size; i++) {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }
}

/* 경로 압축 기반 find */
int find_compression(Subset *subsets, int v) {
    /*
        찾은 root를 부모로 만들어 다음 연산을 줄인다.
    */
    if (subsets[v].parent != v) {
        subsets[v].parent = find_compression(subsets, subsets[v].parent);
    }

    return subsets[v].parent;
}

/* rank 기반 union */
void union_rank(Subset *subsets, int u, int v) {
    /* v 정점의 랭크가 큰 경우 */
    if (subsets[u].rank < subsets[v].rank)
        subsets[u].parent = v;
    /* u 정점의 랭크가 큰 경우 */
    else if (subsets[u].rank > subsets[v].rank) 
        subsets[v].parent = u;
    /* rank가 같은 경우 */
    else {
        subsets[v].parent = u;
        subsets[u].rank++;
    }
}