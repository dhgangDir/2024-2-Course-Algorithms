// main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quick_sort.h" 
#include "merge_sort.h"
#include "sort_utile.h"
#include "result_logger.h"

int main(int argc, char *argv[]) {
    long merge_sort_start, merge_sort_elapsed, quicksort_start, quicksort_elapsed;
    int *A = NULL, *B = NULL;
    int length;

    if (argc != 2) {
        fprintf(stderr, "usage: %s #array_length...\n", argv[0]);
        exit(1);
    }

    // input array size
    length = atoi(argv[1]);

/* 
    init array A, B
    randrom number array A
*/
    A = (int *)malloc(sizeof(int) * length);
    B = (int *)malloc(sizeof(int) * length);

    get_rand_array(A, length);
    
    // copy from array A to B
    memcpy(B, A, sizeof(int) * length);

    // measure quicksort start to millisecond
    quicksort_start = millisecond();
    quick_sort(B, 0, length - 1);
    quicksort_elapsed = millisecond() - quicksort_start;

    // print merge sort result 
    print_elapsed_time(quicksort_elapsed, "Qiucksort");
    // print_array(B, length);

    // measure merge sort start to millisecond
    merge_sort_start = millisecond();
    merge_sort(A, 0, length - 1, length);
    merge_sort_elapsed = millisecond() - merge_sort_start;

    // print merge sort result 
    print_elapsed_time(merge_sort_elapsed, "merge sort");
    // print_array(A, length);


    // save result to file 
    log_elapsed_time_to_file(length, quicksort_elapsed, merge_sort_elapsed);

    free(A);
    free(B);

    return (0);
}