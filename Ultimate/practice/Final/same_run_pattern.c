/* 
16. same_run_pattern
--------------------

Write a program that receives exactly two strings.

Print 1 followed by a newline if both strings have the same sequence of consecutive group characters, regardless of group lengths.

Otherwise, print 0 followed by a newline.

Example:

./same_run_pattern "aaabbccccd" "abbbcccd"

Both strings collapse to:

abcd

Output:

1

Example:

./same_run_pattern "aabbaa" "aaabbb"

Collapsed forms:

aba
ab

Output:

0
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
	char al[26] = {0};
	char al1[26] = {0};
	int i = 0;
	int j;
	int k = 0;
	while (av[1][i])
	{
		j = 1;
		while (av[1][i + j] == av[1][i] && av[1][i + 1])
			j++;
		al[k] = av[1][i];
		k++;
		i += j;
	}
	i = 0;
	k = 0;
	while (av[2][i])
	{
		j = 1;
		while (av[2][i + j] == av[2][i] && av[2][i + 1])
			j++;
		al1[k] = av[2][i];
		k++;
		i += j;
	}
	i = 0;
	while (i < 26)
	{
		if (al1[i] != al[i])
		{
			write(1, "0\n", 2);
			return (0);
		}
		i++;
	}
	write(1, "1", 1);
	write(1, "\n", 1);
}


