/* 
32. rev_params_words
--------------------

Write a program that receives any number of command-line arguments.

Process the arguments from last to first.

For each argument:

- Print its words in reverse order.
- Use exactly one space between words.
- Print one argument per line.

Example:

./rev_params_words "hello big world" "one two"

Output:

two one
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
	if (ac < 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	int j = ac - 1;
	int i = 0;
	int f = 0;
	int e = 0;
	while (j > 0)
	{
		i = 0;
		ft_rev(av[j], i, ft_strlen(av[j]) - 1);
		while (av[j][i])
		{
			while (av[j][i] == ' ' || av[j][i] == '\t')
				i++;
			f = i;
			while (!(av[j][i] == ' ' || av[j][i] == '\t') && av[j][i])
				i++;
			e = i;
			ft_rev(av[j], f, e - 1);
		}
		i = 0;
		int iword = 0;
		int frt = 1;
		while (av[j][i])
		{
			if (av[j][i] == ' ' || av[j][i] == '\t')
				iword = 0;
			else
			{
				if (!iword)
				{
					if (!frt)
						write(1, " ", 1);
					frt = 0;
				}
				write(1, &av[j][i], 1);
				iword = 1;
			}
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	//write(1, "\n", 1);
}