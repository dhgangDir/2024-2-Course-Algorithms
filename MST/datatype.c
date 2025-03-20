#include <stdlib.h>
#include "datatype.h"

/* 동적 할당 받아서 Edge에 데이터를 넣어 주고 반환*/
Edge *get_edge(int u, int v, int weight) {
    Edge * new_edge = (Edge *)malloc(sizeof(Edge));
    new_edge->u = u;
    new_edge->v = v;
    new_edge->weight = weight;

    return new_edge;
}