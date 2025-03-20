#ifndef __MERGE_SORT_H__
#define __MERGE_SORT_H__

// Merge Sort function declaration
/*
    merge_sort - Sorts an array of integers using the Merge Sort algorithm.

    Parameters
    ----------
    list : int[]
        Array of integers to be sorted.
    low : int
        Starting index of the array/sub-array to sort.
    high : int
        Ending index of the array/sub-array to sort.

    Description
    -----------
    Recursively divides the array into sub-arrays, sorts each sub-array,
    and merges them to produce a sorted array.
*/
void merge_sort(int list[], int low, int high, int length);

// Merge function declaration
/*
    merge_sort_merge - Merges two sorted sub-arrays into a single sorted sub-array.

    Parameters
    ----------
    list : int[]
        Array containing the two sorted sub-arrays to merge.
    low : int
        Starting index of the first sorted sub-array.
    mid : int
        Middle index that separates the two sorted sub-arrays.
    high : int
        Ending index of the second sorted sub-array.

    Description
    -----------
    Merges two sorted sub-arrays within 'list' (from 'low' to 'mid' and 'mid+1' to 'high')
    into one sorted sub-array, placing the result back into 'list'.
*/
void merge_sort_merge(int list[], int low, int mid, int high, int length);

#endif
