==========================================================================================
Assignment name  : ft_lstclear
Expected files   : ft_lstclear.c
Allowed functions: free
------------------------------------------------------------------------------------------

Write a function that deletes and frees every node of a linked list, then
sets the list pointer to NULL.

Use the following struct:

typedef struct s_list
{
    int             data;
    struct s_list   *next;
}                   t_list;

Your function must be declared as follows:

void	ft_lstclear(t_list **lst);
==========================================================================================