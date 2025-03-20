#include <stdio.h>
#include <stdlib.h>
#include "array_queue.h"

/* 큐 초기화 */
void init_queue(Queue *pq) {
    pq->rear = pq->front = -1;
}

/* 큐가 포화인지 확인 */
int is_queue_full(Queue *pq) {
    if (pq->rear == MAX_LEN - 1) return TRUE;
    else                         return FALSE;
}

/* 큐가 공백인지 확인 */
int is_queue_empty(Queue *pq) {
    if (pq->front == pq->rear) return TRUE;
    else                       return FALSE;
}

/* 큐에 데이터 삽입 */
void enqueue(Queue *pq, DataType data) {
    if (is_queue_full(pq)) {
        printf("포화 큐이므로 데이터 삽입 불가\n");
        exit(0);
    } else
        pq->queue[++(pq->rear)] = data;
}

/* 큐에 데이터 삭제 */
DataType dequeue(Queue *pq) {
    if (is_queue_empty(pq)) {
        printf("공백 큐이므로 항목 삭제가 불가능\n");
        exit(1);
    } else
        return pq->queue[++(pq->front)];
}

/* 큐에 담긴 데이터 개수 확인 */
int count_queue(Queue *pq) {
    return pq->rear - pq->front;
}

/* 큐에 담기는 데이터를 정렬하는 함수 정의 */
int compare(const void *a, const void *b) {
    DataType datatype_a = *(DataType *)a;
    DataType datatype_b = *(DataType *)b;
    if (datatype_a->weight < datatype_b->weight) return -1;
    if (datatype_a->weight > datatype_b->weight) return 1;
    return 0;
}