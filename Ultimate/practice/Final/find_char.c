/* 
==================================================
PART 1 — BASIC STRING MOVEMENTS
==================================================

1. find_char
------------

Write a program that receives exactly two arguments:

- The first argument is a string.
- The second argument must contain exactly one character.

Print:

- 1 followed by a newline if the character exists anywhere inside the first string.
- 0 followed by a newline if it does not exist.

If the number of arguments is incorrect, or the second argument does not contain exactly one character, print 0 followed by a newline.

Examples:

./find_char "hello" "e"
1

./find_char "hello" "z"
0

 */

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 3 || av[2][1] != '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}

	

	int i = 0;
	while (av[1][i])
	{
		if ( av[1][i] == av[2][0])
		{
			write(1, "1\n", 2);
			return (0);
		}
		i++;
	}
	write(1, "0\n", 2);
	return (0);
}