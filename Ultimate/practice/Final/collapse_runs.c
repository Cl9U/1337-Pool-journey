/* 
11. collapse_runs
-----------------

Write a program that receives exactly one string.

Replace every consecutive group with one occurrence of its character.

Always finish with a newline.

Examples:

./collapse_runs "aaabbccccd"
abcd

./collapse_runs "aabbaa"
aba
*/

#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int count;
	while (av[1][i])
	{
		count = 1;
		while (av[1][i + count] == av[1][i] && av[1][i])
		{
			count++;
		}
		// printf("%d",count);
		// fflush(stdout);
		write(1, &av[1][i], 1);
		i += count;
	}
	write(1, "\n", 1);
	return (0);
}
