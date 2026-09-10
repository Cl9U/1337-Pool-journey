/* 
10. count_runs
--------------

Write a program that receives exactly one string.

Print the number of consecutive character groups followed by a newline.

Example:

./count_runs "aaabbccccd"

Groups:

aaa | bb | cccc | d

Output:

4

If the number of arguments is not exactly one, print 0 followed by a newline.

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
	int g = 0;
	while (av[1][i])
	{
		count = 1;
		while (av[1][i + count] == av[1][i] && av[1][i + 1])
		{
			count++;
		}
		// write(1, &av[1][i], 1);
		g++;
		i += count;
	}
	printf("%d", g);
	fflush(stdout);
	write(1, "\n", 1);
	return (0);
}