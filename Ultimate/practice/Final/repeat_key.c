/* 
21. repeat_key
--------------

Write a program that receives:

- A string.
- An alphabetical key.

Print the key repeatedly until one key character has been produced for every alphabetical character in the string.

Non-alphabetical characters in the first string do not consume key characters.

If the arguments are invalid, print only a newline.

Example:

./repeat_key "ab-c de!" "key"

The input contains five letters.

Output:

keyke

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
		i++;
	}
	
	write(1, "\n", 1);
}