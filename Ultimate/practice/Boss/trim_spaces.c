/* 
Assignment name : trim_spaces
Expected files : trim_spaces.c
Allowed functions: write
Write a program that trims leading and trailing spaces and reduces multiple spaces between words
to a single space, then prints the result followed by newline.
$> ./trim_spaces ' hello world ' | cat -e
hello world$
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int sep = 0;
	while (av[1][i])
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		if (av[1][i])
		{
			if (sep)
				write (1, " ", 1);
			sep = 1;
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	
	write(1, "\n", 1);
}