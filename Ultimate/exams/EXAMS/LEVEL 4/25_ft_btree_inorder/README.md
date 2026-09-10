==========================================================================================
Assignment name  : ft_btree_inorder
Expected files   : ft_btree_inorder.c
Allowed functions: write
------------------------------------------------------------------------------------------

Write a function that performs an in-order traversal of a binary tree and
applies the function f to the data of each node.

In-order traversal visits: left subtree, then current node, then right subtree.

Use the following struct:

typedef struct s_btree
{
    int                 data;
    struct s_btree      *left;
    struct s_btree      *right;
}                       t_btree;

Your function must be declared as follows:

void	ft_btree_inorder(t_btree *root, void (*f)(int));

Example: For a BST containing {1, 2, 3, 4, 5}, in-order traversal with
a print function displays: 1 2 3 4 5
==========================================================================================