/* 
13. repeated_runs
-----------------

Write a program that receives exactly one string.

Print only groups containing at least two consecutive equal characters.

For every printed group, print the character followed by its count.

Always finish with a newline.

Example:

./repeated_runs "aaabbcdddexx"

Groups:

aaa | bb | c | ddd | e | xx

Output:

a3b2d3x2

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
	int j;
	while (av[1][i])
	{
		j = 1;
		while (av[1][i + j] == av[1][i] && av[1][i])
			j++;
		if (j > 1)
		{
			write(1, &av[1][i], 1);
			printf("%d", j);
			fflush(stdout);
		}
		i += j;
	}
	

	write(1, "\n", 1);
}