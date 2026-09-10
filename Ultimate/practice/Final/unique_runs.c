/* 
==================================================
PART 2 — RLE AND CONSECUTIVE GROUPS
==================================================

9. unique_runs
--------------

Write a program that receives exactly one string.

Print only the first character of every consecutive group, followed by a newline.

Examples:

./unique_runs "aaabbccccd"
abcd

./unique_runs "aabaa"
aba

The two groups of a remain separate because they are not consecutive.

*/

#include <unistd.h>

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
		write(1, &av[1][i], 1);
		i += count;
	}
	write(1, "\n", 1);
	return (0);
}