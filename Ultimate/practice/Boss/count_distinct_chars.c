/* 
Assignment name : count_distinct_chars
Expected files : count_distinct_chars.c
Allowed functions: write
Write a program that prints the number of distinct characters in the first argument followed by
newline.
$> ./count_distinct_chars 'hello' | cat -e
4$
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
	int count = 0;
	char feq[256] = {0};
	while (av[1][i])
	{
		feq[av[1][i]]++;
		i++;
	}
	while (i < 256)
	{
		if (feq[i] == 1)
			count++;
		i++;
	}
	printf("%d", count);
	fflush(stdout);
	write(1, "\n", 1);
}