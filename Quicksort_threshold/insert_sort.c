#include "insert_sort.h"

/*
    insertion_sort - Sorts an array (or sub-array) using the Insertion Sort algorithm.

    This function sorts the elements in the specified range of an array using the Insertion Sort algorithm.
    The insertion sort works by dividing the list into a sorted and an unsorted part,
    and repeatedly inserting elements from the unsorted part into their correct position in the sorted part.
*/
void insertion_sort(int list[], int low, int high) {
    int i, j, next;

    // Iterate over the elements starting from the second element in the specified range
    for (i = low + 1; i <= high; i++) {
        next = list[i]; // The next element to be inserted into the sorted part

        // Find the correct position for the element in the sorted part of the array
        for (j = i - 1; j >= low && next < list[j]; j--) {
            list[j + 1] = list[j]; // Shift elements to the right to make room for the next element
        }

        // Insert the element into its correct position
        list[j + 1] = next;
    }
}