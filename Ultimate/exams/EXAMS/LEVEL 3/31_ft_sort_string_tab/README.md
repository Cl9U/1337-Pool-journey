==========================================================================================
Assignment name  : ft_sort_string_tab
Expected files   : ft_sort_string_tab.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Write a function that sorts an array of strings in ascending ASCII order.

The array is NULL-terminated (the last element is a NULL pointer).
Sort in place (swap the pointers, don't copy strings).

Your function must be declared as follows:

void	ft_sort_string_tab(char **tab);

Example:

char *tab[] = {"cherry", "apple", "banana", NULL};
ft_sort_string_tab(tab);
// tab is now {"apple", "banana", "cherry", NULL}
==========================================================================================