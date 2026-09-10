/* 
Assignment name  : pyramid
Expected files   : pyramid.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive integer as a parameter and displays a
pyramid of '*' whose height is that number, followed by a newline.

The pyramid is centered: its base is the widest line, and each line above it
loses one '*' on the left and one on the right. Lines must be padded on the
left with spaces so the pyramid keeps its shape, but no trailing spaces may
be printed after the last '*' of a line.

If the number of parameters is different from 1, or if the parameter is not a
valid positive integer, the program displays only a newline.

Examples:

$> ./pyramid 5 | cat -e
    *$
   ***$
  *****$
 *******$
*********$
$> ./pyramid 3 | cat -e
  *$
 ***$
*****$
$> ./pyramid 1 | cat -e
*$
$> ./pyramid 0 | cat -e
$
$> ./pyramid 2 4 | cat -e
$
$> ./pyramid xyz | cat -e
$
$> ./pyramid -3 | cat -e
$
$> ./pyramid | cat -e
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
	int n;
	int i;
	int j;
	n = atoi(av[1]);
	i = 1;
	j = 0;
	while (i <= n)
	{
		j = 0;
		while (j < n - i)
		{
			write(1, " ", 1);
			j++;	
		}
		j = 0;
		while (j < 2 * i - 1)
		{
			write(1, "*", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	// i = n;
	// 	while (i >= 1)
	// {
	// 	j = 0;
	// 	while (j <  n - i)
	// 	{
	// 		write(1, " ", 1);
	// 		j++;	
	// 	}
	// 	j = 0;
		
	// 	while (j < 2 * i - 1)
	// 	{
	// 		write(1, "*", 1);
	// 		j++;
	// 	}
	// 	write(1, "\n", 1);
	// 	i--;
	// }
	
	//write(1, "\n", 1);
}


///
// int	main(int ac, char **av)
// {
// 	if (ac != 2)
// 	{
// 		write(1, "wrong number of arguments\n", 26);
// 		return (0);
// 	}
// 	int n = atoi(av[1]);
// 	int i = 1;
// 	int j = 0;
// 	while(i <= n)
// 	{
// 		j = 0;
// 		while (j < n - i)
// 		{
// 			write(1, " ", 1);
// 			j++;
// 		}
// 		j = 0;
// 		while (j < 2 * i - 1)
// 		{
// 			write(1, "#", 1);
// 			j++;
// 		}
// 		write (1, "\n", 1);
// 		i++;
// 	}
// 	return (0);
// }