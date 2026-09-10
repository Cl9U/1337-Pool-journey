==========================================================================================
Assignment name  : ft_btree_depth
Expected files   : ft_btree_depth.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Write a function that returns the maximum depth of a binary tree.
An empty tree has a depth of 0. A tree with only a root has a depth of 1.

Use the following struct:

typedef struct s_btree
{
    int                 data;
    struct s_btree      *left;
    struct s_btree      *right;
}                       t_btree;

Your function must be declared as follows:

int	ft_btree_depth(t_btree *root);

Examples:

NULL                     // returns 0
root only                // returns 1
root -> left -> left     // returns 3
==========================================================================================