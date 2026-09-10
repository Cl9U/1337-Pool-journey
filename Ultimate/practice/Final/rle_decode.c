/* 
15. rle_decode
--------------

Write a program that receives exactly one encoded string.

The encoded string consists of alternating:

character followed by one decimal digit

Print each character the requested number of times.

Assume every count is between 1 and 9.

If the argument is invalid or the number of arguments is incorrect, print only a newline.

Example:

./rle_decode "a3b2c4d1"

Output:

aaabbccccd

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
	int c;
	int j = 0;
	while (av[1][i])
	{
		if (av[1][i] >= '0' && av[1][i] <= '9')
		{
			j = av[1][i] - '0';
			while (j > 0)
			{
				write(1, &av[1][i - 1], 1);
				j--;
			}
		}
		i++;
	}
	
	write(1, "\n", 1);
}