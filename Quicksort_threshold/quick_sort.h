#ifndef __QUICK_SORT_H__
#define __QUICK_SORT_H__

// Quicksort function declaration
/*
    quick_sort - Sorts an array of integers using the Quicksort algorithm.

    Parameters
    ----------
    list : int[]
        Array of integers to be sorted.
    low : int
        Starting index of the array or sub-array to sort.
    high : int
        Ending index of the array or sub-array to sort.

    Description
    -----------
    Recursively sorts sub-arrays by choosing a pivot and dividing the elements
    into two partitions based on the pivot, such that elements less than the pivot
    are on the left and elements greater are on the right.
*/
void quick_sort(int list[], int low, int high);

// Used Threshold Quick Sort function declaration
/*
    used_threshold_quick_sort - Sorts an array using a hybrid of Quicksort and Insertion Sort.

    This function sorts an array using the Quicksort algorithm for larger segments,
    and switches to Insertion Sort when the partition size falls below the given threshold.

    Parameters
    ----------
    list : int[]
        The array to be sorted.
    low : int
        The starting index of the array/sub-array to be sorted.
    high : int
        The ending index of the array/sub-array to be sorted.
    threshold : int
        The threshold value below which Insertion Sort is used instead of Quicksort.

    Description
    -----------
    This hybrid approach takes advantage of the efficiency of Quicksort for larger datasets
    and the efficiency of Insertion Sort for small datasets. The threshold helps minimize
    the overhead of recursive calls in smaller segments.
*/
void used_threshold_quick_sort(int list[], int low, int high, int threshold);

// Partition function declaration
/*
    partition - Divides an array or sub-array into two parts based on a pivot element.

    Parameters
    ----------
    list : int[]
        Array of integers to be partitioned.
    low : int
        Starting index of the array or sub-array.
    high : int
        Ending index of the array or sub-array.

    Returns
    -------
    int
        The final position of the pivot after partitioning.

    Description
    -----------
    Selects a pivot element (initially the first element in the array)
    and partitions the array such that elements smaller than the pivot
    are to the left, and elements greater than the pivot are to the right.
    Returns the index of the pivot after partitioning.
*/
int partition(int list[], int low, int high);

#endif