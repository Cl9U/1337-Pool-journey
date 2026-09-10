/* 
28. last_param
--------------

Write a program that prints only the final command-line argument followed by a newline.

If no argument is provided, print only a newline.

Example:

./last_param one two three

Output:

three
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
	while (av[ac - 1][i])
	{
		write(1, &av[ac -1][i], 1);
		i++;
	}
	
	write(1, "\n", 1);
}