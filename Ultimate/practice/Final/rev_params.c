/* 
30. rev_params
--------------

Write a program that prints all command-line arguments from last to first, one argument per line.

The program name must not be printed.

Example:

./rev_params one two three

Output:

three
two
one
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac < 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int j = ac - 1;
	while (j > 0)
	{
		i = 0;
		while (av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		j--;
		write(1, "\n", 1);
	}
	
}