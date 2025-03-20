// sort_utile.c

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "sort_utile.h"

/*
    swap - Swaps the values of two integers.

    Swaps the values pointed to by `a` and `b` using a temporary variable.
*/
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
    millisecond - Measures the elapsed time in milliseconds since the Unix epoch.

    Uses `gettimeofday()` to get the current time and converts it to milliseconds.
    This can be used to measure the duration between two events.
*/
long millisecond() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return(1000*tv.tv_sec + tv.tv_usec/1000);
}

/*
    get_rand_array - Generates an array of random integers.

    Fills the provided array with random integers.
    Uses the current time to seed the random number generator to ensure different
    results each time the program is run.
*/
void get_rand_array(int list[], int length) {
    int i;
    srand(time(NULL)); // Seed the random number generator with the current time
    for (i = 0; i < length; i++) {
        list[i] = rand();  // Generate a random integer and store it in the array
    }
}

/*
    print_elapsed_time - Prints the elapsed time for a sorting algorithm.

    Prints the name of the sorting algorithm and the elapsed time in milliseconds.
    Useful for comparing performance between different sorting algorithms.
*/
void print_elapsed_time(long elapsed, char *sort_name) {
    printf("%s: ", sort_name);
    printf("elapsed time: %ld milliseconds\n", elapsed);
}

/*
    print_array - Prints the elements of an array.

    Prints the elements of the provided array in a formatted manner, with each
    element being printed with a width of 3 for readability.
*/
void print_array(int list[], int length) {
    int i; 

    for (i = 0; i < length; i++) {
        printf("%3d ", list[i]);
    }
    printf("\n");
}