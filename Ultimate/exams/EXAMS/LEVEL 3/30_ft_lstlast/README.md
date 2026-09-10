==========================================================================================
Assignment name  : ft_lstlast
Expected files   : ft_lstlast.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Write a function that returns the last node of the list.
If the list is empty, return NULL.

Use the following struct:

typedef struct s_list
{
    int             data;
    struct s_list   *next;
}                   t_list;

Your function must be declared as follows:

t_list	*ft_lstlast(t_list *lst);
==========================================================================================