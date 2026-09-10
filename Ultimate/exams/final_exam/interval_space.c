/* 
Assignment name  : interval_space
Expected files   : interval_space.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays its characters
separated by three spaces, followed by a newline. No trailing spaces
after the last character. If not given exactly one argument, print a
newline.

$> ./a.out "abc" | cat -e
a   b   c$
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
		write(1, &av[1][i], 1);
		if (av[1][i + 1])
			write(1, "   ", 3);
		i++;
	}
	
	write(1, "\n", 1);
}