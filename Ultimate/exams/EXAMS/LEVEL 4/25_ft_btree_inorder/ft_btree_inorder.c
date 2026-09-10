typedef struct s_btree
{
	int				data;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

void	ft_btree_inorder(t_btree *root, void (*f)(int))
{

}