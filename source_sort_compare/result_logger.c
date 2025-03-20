#include <stdlib.h> // exit()
#include "result_logger.h"

/*
    log_elapsed_time_to_file - Logs the elapsed time of sorting algorithms to a file.

    This function writes the length of the sorted array and the elapsed times
    of Quicksort and Merge Sort to a log file named `sort_compare.txt`.

    If the file cannot be opened, an error message is printed to `stderr`
    and the program terminates.
*/
void log_elapsed_time_to_file(int length, long quicksort_elapsed, long merge_sort_elapsed) {
    FILE *file = NULL;

    // Open the file in append mode to add data to the end of the file
    file = fopen("sort_compare.txt", "a");

    if (file == NULL) {
        // Print error message if the file cannot be opened and exit with a failure code
        fprintf(stderr, "Failed to open the file...\n");
        exit(1);
    }

    // Write the length, quicksort elapsed time, and merge sort elapsed time to the file
    fprintf(file, "%d %ld %ld\n", length, quicksort_elapsed, merge_sort_elapsed);

    // Close the file to ensure all data is written and resources are released
    fclose(file);
}