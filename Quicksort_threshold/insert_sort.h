#ifndef __INSERT_SORT_H__
#define __INSERT_SORT_H__

/*
    insertion_sort - Sorts an array (or sub-array) using the Insertion Sort algorithm.

    This function sorts the elements in the specified range of an array using the Insertion Sort algorithm.
    Insertion Sort is generally efficient for small datasets and partially sorted data.

    Parameters
    ----------
    list : int[]
        The array (or sub-array) to be sorted.
    low : int
        The starting index of the sub-array to be sorted.
    high : int
        The ending index of the sub-array to be sorted.

    Description
    -----------
    Insertion Sort is a simple, in-place, comparison-based sorting algorithm.
    It is efficient for small arrays or nearly sorted data and runs in O(n^2) time complexity in the worst case.
*/
void insertion_sort(int list[], int low, int high);

#endif