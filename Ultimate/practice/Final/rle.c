/* 
12. rle
-------

Write a program that receives exactly one string.

For every consecutive group, print:

- The character.
- The number of times it appears consecutively.

Always finish with a newline.

Examples:

./rle "aaabbccccd"
a3b2c4d1

./rle "aabaa"
a2b1a2

If the number of arguments is not exactly one, print only a newline.

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
		write(1, &av[1][i], 1);
		printf("%d",count);
		fflush(stdout);
		i += count;
	}
	write(1, "\n", 1);
	return (0);
}
