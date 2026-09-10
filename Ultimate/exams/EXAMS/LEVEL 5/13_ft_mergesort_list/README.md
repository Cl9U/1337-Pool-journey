==========================================================================================
Assignment name  : ft_mergesort_list
Expected files   : ft_mergesort_list.c
Allowed functions: malloc, free
------------------------------------------------------------------------------------------

Write a function that sorts a linked list using the merge sort algorithm.
Return a pointer to the new head of the sorted list.

Use the following struct:

typedef struct s_list
{
    int             data;
    struct s_list   *next;
}                   t_list;

Your function must be declared as follows:

t_list	*ft_mergesort_list(t_list *lst);

You must use merge sort, not another sorting algorithm.
The sort must be in ascending order.
==========================================================================================