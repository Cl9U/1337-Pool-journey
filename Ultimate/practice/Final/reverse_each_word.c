/* 
29. reverse_each_word
---------------------

Write a program that receives exactly one string.

Reverse the characters inside every word, but preserve the original word order.

Print the words separated by exactly one space.

Spaces and tabs are separators.

If the number of arguments is not exactly one, print only a newline.

Example:

./reverse_each_word "hello big world"

Output:

olleh gib dlrow


*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_revw(char *s, int f, int e)
{
	char tmp;
	e--;
	while (f < e)
	{
		tmp = s[f];
		s[f] = s[e];
		s[e] = tmp;
		f++;
		e--;
	}
	
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int f = 0;
	int e = 0;
	int sep = 0;
	while (av[1][i])
	{
		while (av[1][i] == ' ' || av[1][i] == '\t' && av[1][i])
			i++;
		f = i;
		while (!(av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
			i++;
		e = i;
		ft_revw(av[1], f, e);
	}
	// i = 0;
	// while (av[1][i])
	// {
	// 	while (av[1][i] == ' ' || av[1][i] == '\t' && av[1][i])
	// 		i++;
	// 	if (!(av[1][i] == ' ' || av[1][i] == '\t' && av[1][i]))
	// 	{
	// 		if (av[1][i - 1] == ' ' && av[1][i] && sep)
	// 			write(1, " ", 1);
	// 		sep = 1;
	// 		if (av[1][i] && av[1][i] != ' ')
	// 			write(1, &av[1][i++], 1);
	// 	}
	// }
	i = 0;
	int in_word = 0;
	int first = 1;
	while (av[1][i])
	{
		if (av[1][i] == ' ' || av[1][i] == '\t')
			in_word = 0;
		else
		{
			if (!in_word)
			{
				if (!first)
					write(1, " ", 1);
				first = 0;
			}
			write(1, &av[1][i], 1);
			in_word = 1;
		}
		i++;
	}
	write(1, "\n", 1);
}
