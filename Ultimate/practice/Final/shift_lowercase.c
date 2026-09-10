/* 
18. shift_lowercase
-------------------

Write a program that receives:

- One lowercase alphabetical character.
- A shift between 0 and 9.

Print the character shifted forward in the alphabet.

The alphabet must wrap around after z.

If the arguments are invalid, print only a newline.

Examples:

./shift_lowercase "a" "3"
d

./shift_lowercase "y" "4"
c
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 3 || av[1][1] != '\0' || !(av[1][0] >= 'a' && av[1][0] <= 'z'))
	{
		write(1, "\n", 1);
		return (0);
	}
	char c = av[1][0];
	int shift = atoi(av[2]);
	c = (c - 'a' + shift) % 26 + 'a';
	write(1, &c, 1);
	write(1, "\n", 1);
}