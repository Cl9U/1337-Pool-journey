==========================================================================================
Assignment name  : ft_lstnew
Expected files   : ft_lstnew.c
Allowed functions: malloc
------------------------------------------------------------------------------------------

Write a function that allocates (with malloc) and returns a new node.
The member variable data is initialized with the value of the parameter data.
The variable next is initialized to NULL.

Use the following struct:

typedef struct s_list
{
    int             data;
    struct s_list   *next;
}                   t_list;

Your function must be declared as follows:

t_list	*ft_lstnew(int data);
==========================================================================================