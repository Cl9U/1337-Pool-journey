int ft_strlen_recursion(char *s)
{
	int i = 0;
	if(!*s)
		return (0);
	return (1 + ft_strlen_recursion(s + 1));
}
#include <stdio.h>
int main()
{
	char str[] = "hello world ftg";
	printf("%d",ft_strlen_recursion(str));
}



// void ft_swap(int ***a, int **b)
// {

// }
// int main()
// {
// 	int e = 5;
// 	int c = 7;

// 	int *p = &e;
// 	int **p1 = &p;

// 	int *p2 = &c;
// 	int **p3 = &p2;
// 	printf("e = %d, c = %d\n", e, c);
// 	ft_swap (&p1, p3);
// 	printf("e = %d, c = %d\n", e, c);
// }