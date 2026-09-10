/* 
======================================./01-count_characters.txt=================
Assignment name : count_characters
Expected files : count_characters.c
Allowed functions: write
Write a program that counts the number of characters in the first argument string and prints the
count followed by a newline. If no argument, print 0 and newline.
$> ./count_characters "Hello, World!" | cat -e
13$
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
	int c = 0;
	while (av[1][i])
	{
		if ((av[1][i] >= 'a' && av[1][i] <= 'z')
		|| (av[1][i] >= 'A' && av[1][i] <= 'Z'))
			c++;
		i++;
	}
	printf("%d",c);
	fflush(stdout);
	write(1, "\n", 1);
}