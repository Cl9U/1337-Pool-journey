==========================================================================================
Assignment name  : ft_is_sorted
Expected files   : ft_is_sorted.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Write a function that returns 1 if the integer array is sorted in ascending
order, -1 if sorted in descending order, and 0 if it is not sorted.
An array of 0 or 1 element is considered sorted in ascending order.

Your function must be declared as follows:

int	ft_is_sorted(int *tab, int size);

Examples:

int a[] = {1, 2, 3, 4, 5};
ft_is_sorted(a, 5);       // returns 1

int b[] = {5, 4, 3, 2, 1};
ft_is_sorted(b, 5);       // returns -1

int c[] = {1, 3, 2, 4, 5};
ft_is_sorted(c, 5);       // returns 0
==========================================================================================