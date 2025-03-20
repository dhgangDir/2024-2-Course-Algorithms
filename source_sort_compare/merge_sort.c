#include "merge_sort.h"



/*
    merge_sort - Sorts an array of integers using the Merge Sort algorithm.
    
    Implements the divide-and-conquer strategy to sort an array recursively.
    The array is split into smaller sub-arrays, each sorted individually and
    then merged together in sorted order.
*/
void merge_sort(int list[], int low, int high, int length) {
    int middle;

    if(low < high) {
        // Find the middle point to divide the array into two halves
        middle = (low + high)/2;

        // Recursively divide and sort the first half
        merge_sort(list, low, middle, length);

        // Recursively divide and sort the second half
        merge_sort(list, middle + 1, high, length);

        // Merge the two halves together in sorted order
        merge_sort_merge(list, low, middle, high, length);
    }
}


/*
    merge_sort_merge - Merges two sorted sub-arrays into a single sorted sub-array.

    The merge function takes two sub-arrays, from 'low' to 'mid' and from 'mid+1' to 'high',
    and merges them into a single sorted array. A temporary array is used to store the merged
    elements before copying them back to the original array.
*/
void merge_sort_merge(int list[], int low, int mid, int high, int length) {
    int n1 = low, n2 = mid + 1, s = low, i;
    int sorted[length]; // Temporary array to store merged results

    // Merge the two sorted sub-arrays into the temporary array
    while (n1 <= mid && n2 <= high) {
        if (list[n1] <= list[n2]) {
            sorted[s++] = list[n1++];
        } else {
            sorted[s++] = list[n2++];
        }
    }

    // Copy any remaining elements from the left sub-array
    while (n1 <= mid) {
        sorted[s++] = list[n1++];
    }

    // Copy any remaining elements from the right sub-array
    while (n2 <= high) {
        sorted[s++] = list[n2++];
    }

    // Copy the merged sub-array back into the original array
    for (i = low; i <= high; i++) {
        list[i] = sorted[i];
    }
}
