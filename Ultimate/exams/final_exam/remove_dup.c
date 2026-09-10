/* 
Assignment name  : remove_dup
Expected files   : remove_dup.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter and displays it with every
duplicate character removed, followed by a newline.

The string is read from left to right. A character is displayed the first time
it is encountered, and every later occurrence of that same character is
skipped, whether or not it is adjacent to the first one. The characters that
remain keep their original order.

Every character counts, including spaces and punctuation. Uppercase and
lowercase are considered different characters.

If the number of parameters is different from 1, the program displays only a
newline.

Examples:

$> ./remove_dup "helllllllo" | cat -e
helo$
$> ./remove_dup "aaaaaaaaaaaaa" | cat -e
a$
$> ./remove_dup "banana" | cat -e
ban$
$> ./remove_dup "aabbaa" | cat -e
ab$
$> ./remove_dup "hello world" | cat -e
helo wrd$
$> ./remove_dup "abcdef" | cat -e
abcdef$
$> ./remove_dup "aAbB" | cat -e
aAbB$
$> ./remove_dup "" | cat -e
$
$> ./remove_dup "ab" "cd" | cat -e
$
$> ./remove_dup | cat -e
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
	char feq[256] = {};
	int i = 0;
	while (av[1][i])
	{
		if (feq[av[1][i]] == 0)
		{
			write(1, &av[1][i], 1);
			feq[av[1][i]] = 1;
		}
		i++;
	}
	
	write(1, "\n", 1);
}



