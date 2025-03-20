#include "quick_sort.h"
#include "insert_sort.h"
#include "sort_utile.h" // use function swap

/*
    quick_sort - Sorts an array of integers using the Quicksort algorithm.

    This function is a recursive implementation of the Quicksort algorithm.
    It selects a pivot element using the partition function and sorts
    elements such that smaller elements come before larger elements.
*/
void quick_sort(int list[], int low, int high) {
    int pivot_pos;
    if (low < high) {

        // Partition the array and get the pivot position
        pivot_pos = partition(list, low, high);

        // Partition the array and get the pivot position
        quick_sort(list, low, pivot_pos - 1);
        quick_sort(list, pivot_pos + 1, high);
    }
}

/*
    used_threshold_quick_sort - Sorts an array using a hybrid of Quicksort and Insertion Sort.

    This function is a recursive implementation of the Quicksort algorithm with a threshold to switch
    to Insertion Sort for smaller segments to improve efficiency. For large partitions, Quicksort is used.
    When the size of a partition is below or equal to the threshold, Insertion Sort is used instead.
 */
void used_threshold_quick_sort(int list[], int low, int high, int threshold) {
    int pivot_pos;

    // If the current segment size is less than or equal to the threshold,
    // use Insertion Sort to sort the segment.
    if ((high - low + 1) <= threshold) {
        insertion_sort(list, low, high);
        return;
    }
    // Partition the array and get the pivot position
    pivot_pos = partition(list, low, high);

    // Partition the array and get the pivot position
    used_threshold_quick_sort(list, low, pivot_pos - 1, threshold); 
    used_threshold_quick_sort(list, pivot_pos + 1, high, threshold);
}

/*
    partition - Partitions an array around a pivot element.

    The partition function selects the first element as the pivot
    and reorders the array so that all elements smaller than the pivot
    are to its left and all elements greater are to its right.
    Finally, it swaps the pivot element to its correct position.
*/
int partition(int list[], int low, int high) {
    int i, j = low;

    // Iterate over elements and reorder based on the pivot
    for (i = low + 1; i <= high; i++) {
        if (list[i] < list[low]) {
            j++;
            // Swap elements to move smaller element to the left of the pivot
            swap(&list[i], &list[j]);
        }
    }

    // Swap the pivot element to its correct position
    swap(&list[low], &list[j]);

    // Return the final position of the pivot
    return j;
}