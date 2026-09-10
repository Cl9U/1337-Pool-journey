/*
Assignment name : split_words
Expected files : split_words.c
Allowed functions: write
Write a program that prints each word from the first argument string on a new line. Words are
separated by spaces or tabs.
$> ./split_words 'one two three' | cat -e
one$
two$
three$
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
	int f = 0;
	int e = 0;
	char c;

	while (av[1][i])
	{
		while (!(av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
		while (av[1][i] == ' ' || av[1][i] == '\t'&& av[1][i])
		{
			i++;
		}
		write(1, "\n", 1);
	}
	
	write(1, "\n", 1);
}