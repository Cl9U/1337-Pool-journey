/* 27. clean_spaces
----------------

Write a program that receives exactly one string.

Print all its words separated by exactly one space.

Remove spaces and tabs from the beginning and end.

If the number of arguments is not exactly one, print only a newline.

Example:

./clean_spaces "   hello     big   world   "

Output:

hello big world
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
	int sep = 0;
	while (av[1][i])
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		if (!(av[1][i] == ' ' || av[1][i] == '\t') && av[1][i])
		{	
			if (av[1][i - 1] == ' ' && sep != 0)
				write(1, " ", 1);
			sep = 1;
			write(1, &av[1][i], 1);
			i++;
		}
			
	}
	write(1, "\n", 1);
}
