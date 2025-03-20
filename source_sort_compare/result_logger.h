#ifndef __RESULT_LOGGER_H__
#define __RESULT_LOGGER_H__

#include <stdio.h>

// Log elapsed time to file function declaration
/*
    log_elapsed_time_to_file - Logs the elapsed time of sorting algorithms to a file.

    Logs the execution times of Quicksort and Merge Sort for a given array length to the file `sort_compare.txt`.

    Parameters
    ----------
    length : int
        The length of the array that was sorted.
    quicksort_elapsed : long
        The elapsed time of Quicksort in milliseconds.
    merge_sort_elapsed : long
        The elapsed time of Merge Sort in milliseconds.

    Description
    -----------
    This function appends the execution times of Quicksort and Merge Sort,
    along with the corresponding array length, to the file `sort_compare.txt`.
    The format of each line in the file is:
    "<array length> <quicksort elapsed time> <merge sort elapsed time>"
*/
void log_elapsed_time_to_file(int length, long quicksort_elapsed, long merge_sort_elapsed);

#endif