/* 
19. shift_letter
----------------

Write a program that receives:

- One alphabetical character.
- A shift between 0 and 9.

Shift the character while preserving its case.

The alphabet must wrap around.

If the arguments are invalid, print only a newline.

Examples:

./shift_letter "b" "3"
e

./shift_letter "Y" "4"
C


*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 3 || av[1][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	char c = av[1][0];
	int shift = atoi(av[2]);
	if (c >= 'a' && c <= 'z')
		c = (c - 'a' + shift) % 26 + 'a';
	else if (c >= 'A' && c <= 'Z')
		c = (c - 'A' + shift) % 26 + 'A';
	
	write(1, &c, 1);
}