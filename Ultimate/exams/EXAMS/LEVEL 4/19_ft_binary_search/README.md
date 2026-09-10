==========================================================================================
Assignment name  : ft_binary_search
Expected files   : ft_binary_search.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Write a function that searches for a value in a sorted array of integers
using binary search. Return the index of the value if found, or -1 if not.

Your function must be declared as follows:

int	ft_binary_search(int *tab, int size, int value);

The array is sorted in ascending order. You must use binary search, not
linear search.

Examples:

int tab[] = {1, 3, 5, 7, 9, 11, 13};
ft_binary_search(tab, 7, 7)     // returns 3
ft_binary_search(tab, 7, 1)     // returns 0
ft_binary_search(tab, 7, 6)     // returns -1
==========================================================================================