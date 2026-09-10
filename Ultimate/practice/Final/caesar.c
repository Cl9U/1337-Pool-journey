/* 
20. caesar
----------

Write a program that receives:

- A string.
- One decimal digit representing a shift.

Shift every alphabetical character by that amount.

Preserve letter case.

Print non-alphabetical characters unchanged.

If the number of arguments is incorrect or the shift is invalid, print only a newline.

Example:

./caesar "Hello, World!" "3"

Output:

Khoor, Zruog!

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
	int n = atoi(av[2]);
	int i = 0;
	char c;
	while (av[1][i])
	{
		c = av[1][i];
		if (c >= 'a' && c <= 'z')
			c = (c - 'a' + n) % 26 + 'a';
		else if (c >= 'A' && c <= 'Z')
			c = (c - 'A' + n) % 26 + 'A';
		write(1, &c, 1);
		i++;
	}
	
	write(1, "\n", 1);
}
