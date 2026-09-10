#include <stdlib.h>

typedef struct s_btree
{
	int				data;
	struct s_btree	*left;
	struct s_btree	*right;
}					t_btree;

void	ft_btree_insert(t_btree **root, int data)
{

}