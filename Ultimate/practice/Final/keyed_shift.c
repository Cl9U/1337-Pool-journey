/* 
23. keyed_shift
---------------

Write a program that receives:

- A string containing alphabetical and non-alphabetical characters.
- An alphabetical key.

For every alphabetical character in the string, print the corresponding key character.

For every non-alphabetical character, print that original character unchanged.

The key repeats when its end is reached.

Non-alphabetical message characters do not consume key characters.

If the arguments are invalid, print only a newline.

Example:

./keyed_shift "ab-c d!" "key"

Output:

ke-y k!

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
	char c;
	while (av[1][i])
	{
		c = av[1][i];
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		{
			if (av[2][j] == '\0')
			j = 0;
			write(1, &av[2][j], 1);
			j++;
		}
		else
			write(1, &c, 1);
		i++;
	}
	
	write(1, "\n", 1);
}