#ifndef __UNION_FIND_H__
#define __UNION_FIND_H__

/*  
    parent 자신의 부모를 가리킴
    rank 자신이 루트가 됐을 때, 높이
*/
typedef struct _subset {
    int parent;
    int rank;
} Subset;

/* subsets 초기화 */
void init_set(Subset *subset, int size);

/* 경로 압축 기반 find */
int find_compression(Subset *subset, int v);

/* rank 기반 union */
void union_rank(Subset *subset, int u, int v);

#endif // __UNION_FIND_H__