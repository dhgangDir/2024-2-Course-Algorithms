#ifndef __RESULT_LOGGER_H__
#define __RESULT_LOGGER_H__

#include <stdio.h>

// Log elapsed time to file function declaration
/*
    log_elapsed_time_to_file - Logs the elapsed time of sorting algorithms to a file.

    Logs the execution times of Quicksort and the hybrid Quick Sort (with threshold)
    for a given array length to the file `Quicksort_threshold.txt`.

    Parameters
    ----------
    length : int
        The length of the array that was sorted.
    threshold : int
        The threshold value used to switch between Quick Sort and Insertion Sort.
    quicksort_elapsed : long
        The elapsed time of Quicksort in milliseconds.
    threshold_elapsed : long
        The elapsed time of the hybrid sorting algorithm (using threshold) in milliseconds.

    Description
    -----------
    This function appends the execution times of Quicksort and the hybrid Quick Sort (using a threshold),
    along with the corresponding array length and threshold value, to the file `Quicksort_threshold.txt`.
    The format of each line in the file is:
    "<array length> <threshold> <quicksort elapsed time> <threshold-based sort elapsed time>"
*/
void log_elapsed_time_to_file(int length, int threshold, long quicksort_elapsed, long threshold_elapsed);

#endif