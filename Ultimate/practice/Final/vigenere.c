/* 
24. vigenere
------------

Assignment name: vigenere

Expected file: vigenere.c

Allowed functions: write

Write a program that encrypts a string using the Vigenere cipher.

The program takes exactly two arguments:

- The string to encrypt.
- The key used for encryption.

Each alphabetical character in the first argument must be shifted by the alphabetical position of the corresponding character in the key:

a or A -> shift by 0
b or B -> shift by 1
...
z or Z -> shift by 25
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
	char k;
	int n;
	while (av[1][i])
	{
		c = av[1][i];
		k = av[2][j];

		if (!k)
			j = 0;
		if (k >= 'a' && k <= 'z')
			n = k - 'a';
		else if (k >= 'A' && k <= 'Z')
			n = k - 'A';
		if (c >= 'a' && c <= 'z')
		{
			c = (c - 'a' + n) % 26 + 'a';
			j++;
		}
		if (c >= 'A' && c <= 'Z')
		{
			c = (c - 'A' + n) % 26 + 'A';
			j++;
		}
		write(1, &c, 1);
		i++;
	}
	
	write(1, "\n", 1);
}

