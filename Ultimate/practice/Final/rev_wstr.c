/* 
31. rev_wstr
------------

Write a program that receives exactly one string.

Print its words in reverse order, separated by exactly one space.

Spaces and tabs may appear anywhere in the input.

Do not reverse the characters inside each word.

If the number of arguments is not exactly one, print only a newline.

Example:

./rev_wstr "   hello     big world   "

Output:

world big hello

*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_rev(char *s, int f, int e)
{
	char tmp;

	while (f < e)
	{
		tmp = s[f];
		s[f] = s[e];
		s[e] = tmp;
		f++;
		e--;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
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
	int len = ft_strlen(av[1]) - 1;
	ft_rev(av[1], i, len);
	while (av[1][i])
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		f = i;
		while (!(av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
			i++;
		e = i;
		ft_rev(av[1], f, e - 1);
	}
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