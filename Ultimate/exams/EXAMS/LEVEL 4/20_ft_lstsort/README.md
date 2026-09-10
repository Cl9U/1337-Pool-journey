==========================================================================================
Assignment name  : ft_lstsort
Expected files   : ft_lstsort.c
Allowed functions: malloc, free
------------------------------------------------------------------------------------------

Write a function that sorts a linked list of integers in ascending order.
You can use any sorting algorithm.

Use the following struct:

typedef struct s_list
{
    int             data;
    struct s_list   *next;
}                   t_list;

Your function must be declared as follows:

void	ft_lstsort(t_list **lst);

After calling ft_lstsort, the list must be sorted with the smallest value
at the head.
==========================================================================================