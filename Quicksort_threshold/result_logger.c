#include <stdlib.h> // exit()
#include "result_logger.h"

/* 
    log_elapsed_time_to_file - Logs the elapsed time of sorting algorithms to a file.

    This function writes the length of the sorted array, the threshold value used,
    and the elapsed times of Quicksort and the hybrid Quick Sort (using threshold)
    to a log file named `Quicksort_threshold.txt`.

    If the file cannot be opened, an error message is printed to `stderr`
    and the program terminates.

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
    The function appends the execution details to the log file in the following format:
    "<array length> <threshold> <quicksort elapsed time> <threshold-based sort elapsed time>"
    If the file cannot be opened, an error message is printed, and the program is terminated
    to ensure data consistency.
*/
void log_elapsed_time_to_file(int length, int threshold, long quicksort_elapsed, long threshold_elapsed) {
    FILE *file = NULL;

    // Open the file in append mode to add data to the end of the file
    file = fopen("Quicksort_threshold.txt", "a");

    if (file == NULL) {
        // Print error message if the file cannot be opened and exit with a failure code
        fprintf(stderr, "Failed to open the file...\n");
        exit(1);
    }

    // Write the length, threshold value, quicksort elapsed time, and threshold-based sort elapsed time to the file
    fprintf(file, "%d %d %ld %ld\n", length, threshold, quicksort_elapsed, threshold_elapsed);

    // Close the file to ensure all data is written and resources are released
    fclose(file);
}