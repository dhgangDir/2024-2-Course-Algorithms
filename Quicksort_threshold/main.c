// main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "quick_sort.h" 
#include "sort_utile.h"
#include "result_logger.h"

int main(int argc, char *argv[]) {
    long quicksort_start, quicksort_elapsed, threshold_start, threshold_elapsed;
    int *A = NULL, *B = NULL;
    int length, threshold;

    if (argc != 3) {
        fprintf(stderr, "usage: %s #array_length #threshold...\n", argv[0]);
        exit(1);
    }

    // input array size
    length = atoi(argv[1]);

    // input threshold of number
    threshold = atoi(argv[2]);

    if (length < threshold) {
        fprintf(stderr, "error: threshold value is larger than the length of the array.\n");
        exit(2);
    }

/* 
    init array A
    randrom number array A
*/
    A = (int *)malloc(sizeof(int) * length);
    B = (int *)malloc(sizeof(int) * length);

    get_rand_array(A, length);

    memcpy(B, A, sizeof(int) * length);
    
    // measure quicksort start to millisecond
    quicksort_start = millisecond();
    quick_sort(A, 0, length - 1);
    quicksort_elapsed = millisecond() - quicksort_start;

    // print quicksort result 
    print_elapsed_time(quicksort_elapsed, "Qiucksort");
    // print_array(A, length);

    // measure threshold used quicksort start to millisecond
    threshold_start = millisecond();
    used_threshold_quick_sort(B, 0, length - 1, threshold);
    threshold_elapsed = millisecond() - threshold_start;

    // print quicksort result 
    print_elapsed_time(threshold_elapsed, "threshold used Qiucksort");
    // print_array(B, length);

    // save result to file 
    log_elapsed_time_to_file(length, threshold, quicksort_elapsed, threshold_elapsed);

    free(A);
    free(B);

    return (0);
}