/* 22. key_positions
-----------------

Write a program that receives exactly one alphabetical key.

Print the alphabetical position of every key character, separated by spaces.

Uppercase and lowercase key letters have the same value.

If the argument is invalid, print only a newline.

Example:

./key_positions "Key"

Output:

10 4 24


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
	char c;
	while (av[1][i])
	{
		c = av[1][i];
		if (c >= 'a' && c <= 'z')
			j = c - 'a';
		else if (c >= 'A' && c <= 'Z')
			j = c - 'a';
		printf("%d", j);
		fflush(stdout);
		if (av[1][i + 1] != '\0')
		write(1, " ", 1);
		i++;
	}
	
	write(1, "\n", 1);
}