#ifndef __ARRAY_QUEUE_H__
#define __ARRAY_QUEUE_H__

#include "datatype.h"

#define TRUE   1
#define FALSE  0

#define MAX_LEN 100

/* 
    큐에 담길 데이터 타입은 간선의 정보를 담은 Edge
    Edge는 datatype.h에 정의
*/
typedef Edge * DataType;

/* array queue 구조체 */
typedef struct _array_queue {
    DataType queue[MAX_LEN];
    int front;
    int rear;
} Queue;

/* 큐 초기화 */
void init_queue(Queue *pq);

/* 큐에 데이터 삽입 */
void enqueue(Queue *pq, DataType data);

/* 큐에 데이터 삭제 */
DataType dequeue(Queue *pq);

/* 큐가 포화인지 확인 */
int is_queue_full(Queue *pq);

/* 큐가 공백인지 확인 */
int is_queue_empty(Queue *pq);

/* 큐에 담긴 데이터 개수 확인 */
int count_queue(Queue *pq);

/* 큐에 담기는 데이터를 정렬하는 함수 정의 */
int compare(const void *a, const void *b);

#endif // __ARRAY_QUEUE_H__