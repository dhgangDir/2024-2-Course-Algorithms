// sort_utile.h
#ifndef __SORT_UTILE_H__
#define __SORT_UTILE_H__


// Swap function declaration
/*
    swap - Swaps the values of two integers.

    Parameters
    ----------
    a : int *
        Pointer to the first integer.
    b : int *
        Pointer to the second integer.

    Description
    -----------
    Swaps the values of the two integers pointed to by `a` and `b`.
*/
void swap(int *a, int *b);

// Millisecond function declaration
/*
    millisecond - Measures the elapsed time since the program started.

    Returns
    -------
    long
        The current time in milliseconds.

    Description
    -----------
    Uses system time to measure and return the current time in milliseconds.
*/
long millisecond();

// Random array generator function
/*
    get_rand_array - Generates an array of random integers.

    Parameters
    ----------
    list : int[]
        Array to store generated random integers.
    length : int
        Length of the array to be filled with random numbers.

    Description
    -----------
    Fills the provided array with random integers.
    The random numbers are generated using `rand()`.
*/
void get_rand_array(int list[], int length);

// Print elapsed time function
/*
    print_elapsed_time - Prints the elapsed time of a sorting algorithm.

    Parameters
    ----------
    elapsed : long
        The elapsed time in milliseconds.
    sort_name : char *
        The name of the sorting algorithm.

    Description
    -----------
    Prints the name of the sorting algorithm and the time it took
    to complete in milliseconds.
*/
void print_elapsed_time(long elapsed, char *sort_name);

// Print array function
/*
    print_array - Prints the elements of an array.

    Parameters
    ----------
    list : int[]
        The array to be printed.
    length : int
        The length of the array.

    Description
    -----------
    Prints the elements of the provided array in a formatted manner.
*/
void print_array(int list[], int length);

#endif
