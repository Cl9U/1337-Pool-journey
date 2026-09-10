/* Assignment name : count_substring_occurrences
Expected files : count_substring_occurrences.c
Allowed functions: write
Write a program that counts non-overlapping occurrences of the second argument in the first
argument and prints the count followed by newline.
$> ./count_substring_occurrences 'abababa' 'aba' | cat -e
 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int j = 0;
	int count = 0;
	while(av[1][i])
	{
		j = 0;
		while (av[1][i + j] == av[2][j] && av[2][j])
			j++;
		if (!av[2][j] && j > 0)
		{
			count++;
			i += j;
		}
		else
			i++;
	}
	printf("%d",count);
	fflush(stdout);
	write(1, "\n", 1);
}