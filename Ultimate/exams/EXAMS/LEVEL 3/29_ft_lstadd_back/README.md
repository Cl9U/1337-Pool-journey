==========================================================================================
Assignment name  : ft_lstadd_back
Expected files   : ft_lstadd_back.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Write a function that adds the node new at the end of the list.

Use the following struct:

typedef struct s_list
{
    int             data;
    struct s_list   *next;
}                   t_list;

Your function must be declared as follows:

void	ft_lstadd_back(t_list **lst, t_list *new);
==========================================================================================