#ifndef __DATATYPE_H__
#define __DATATYPE_H__

/* 정점, 간선 가중치 정보를 담는 구조체 */
typedef struct edge {
    int u;
    int v;
    int weight;
} Edge;

Edge *get_edge(int u, int v, int weight);

#endif // __DATATYPE_H__