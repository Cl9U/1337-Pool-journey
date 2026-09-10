/* 
Assignment name : join_with_separator
Expected files : join_with_separator.c
Allowed functions: write
Write a program that takes multiple arguments and a separator (first arg is separator) and prints
all following args joined by the separator, then newline.
$> ./join_with_separator ':' a b c | cat -e
a:b:c$
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac < 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 2;
	int j = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		if (i < ac - 1)
		write(1, &av[1][0], 1);
		i++;
	}
	
	write(1, "\n", 1);
}