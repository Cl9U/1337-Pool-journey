==========================================================================================
Assignment name  : ft_btree_insert
Expected files   : ft_btree_insert.c
Allowed functions: malloc
------------------------------------------------------------------------------------------

Write a function that inserts a value into a Binary Search Tree (BST).
If the value already exists, do nothing. If the value is less than the
current node, insert left; if greater, insert right.

Use the following struct:

typedef struct s_btree
{
    int                 data;
    struct s_btree      *left;
    struct s_btree      *right;
}                       t_btree;

Your function must be declared as follows:

void	ft_btree_insert(t_btree **root, int data);
==========================================================================================