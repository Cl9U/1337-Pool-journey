/* 
26. print_params
----------------

Write a program that prints every command-line argument in its original order, one argument per line.

The program name must not be printed.

Example:

./print_params one two three

Output:

one
two
three
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 1;
	int j = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	
	//write(1, "\n", 1);
}