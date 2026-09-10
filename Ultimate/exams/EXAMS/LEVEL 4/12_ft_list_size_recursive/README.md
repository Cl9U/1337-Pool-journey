==========================================================================================
Assignment name  : ft_list_size_recursive
Expected files   : ft_list_size_recursive.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Return the number of elements in the linked list, using recursion only
(no loops allowed).

Use the following struct:

typedef struct      s_list
{
    int             data;
    struct s_list   *next;
}                   t_list;

Your function must be declared as follows:

int	ft_list_size(t_list *begin_list);
==========================================================================================