/* 
Assignment name  : pangram
Expected files   : pangram.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter and displays "true" followed
by a newline if that string is a pangram, or "false" followed by a newline
otherwise.

A pangram is a string that contains every letter of the alphabet at least once.
Case does not matter, and every non-alphabetic character is simply ignored.

If the number of parameters is different from 1, the program displays only a
newline.

An empty string is not a pangram.

Examples:

$> ./pangram "The quick brown fox jumps over the lazy dog" | cat -e
true$
$> ./pangram "abcdefghijklmnopqrstuvwxyz" | cat -e
true$
$> ./pangram "Pack my box with five dozen liquor jugs!" | cat -e
true$
$> ./pangram "aBcDeFgHiJkLmNoPqRsTuVwXyZ" | cat -e
true$
$> ./pangram "The quick brown fox jumps over the lazy" | cat -e
false$
$> ./pangram "abcdefghijklmnopqrstuvwxy" | cat -e
false$
$> ./pangram "" | cat -e
false$
$> ./pangram "abc" "defghijklmnopqrstuvwxyz" | cat -e
$
$> ./pangram | cat -e
$
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

	while (av[1][i])
	{
		if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			av[1][i] += 32;
		i++; 
	}
	char c = 'a';
	i = 0;
	int j;
	while (av[1][i])
	{
		j = 0;
		while (av[1][j])
		{
			if (av[1][j] == c)
			{
				if (c == 'z' && av[1][j] == 'z')
				{	
					write(1, "true", 4);
					write(1, "\n", 1);
					return (0);
				}
				c++;
			}
			j++;
		}	
		i++;
	}
	write(1, "false", 5);
	write(1, "\n", 1);
	return (0);
}