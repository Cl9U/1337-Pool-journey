==========================================================================================
Assignment name  : ft_btree_search
Expected files   : ft_btree_search.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Write a function that searches for a value in a Binary Search Tree (BST).
Return a pointer to the node containing the value, or NULL if not found.

Use the following struct:

typedef struct s_btree
{
    int                 data;
    struct s_btree      *left;
    struct s_btree      *right;
}                       t_btree;

Your function must be declared as follows:

t_btree	*ft_btree_search(t_btree *root, int data);
==========================================================================================