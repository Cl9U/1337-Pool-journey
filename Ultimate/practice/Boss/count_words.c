/* Assignment name : count_words
Expected files : count_words.c
Allowed functions: write
Write a program that counts the number of words in the first argument string and prints the count
followed by a newline. Words are separated by spaces or tabs. If no argument, print 0 and newline.
$> ./count_words "Hello world from C" | cat -e
4$ */

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
	char c;
	int iwd = 0;
	int wd = 0;

	while (av[1][i])
	{
		c = av[1][i];
		if (!(c == ' ' || c == '\t'))
		{
			if (!iwd)
			{
				iwd = 1;
				wd++;
			}
		}
		else
			iwd = 0;
		i++;
	}
	printf("%d",wd);
	fflush(stdout);
	write(1, "\n", 1);
}