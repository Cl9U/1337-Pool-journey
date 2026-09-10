/*
==========================================================================================
Assignment name  : ft_sqrt
Expected files   : ft_sqrt.c
Allowed functions: none
------------------------------------------------------------------------------------------

Write a function that computes the square root of a number.

Your function must be declared as follows:

int ft_sqrt(int nb);

If nb has a square root that is a whole number (a "perfect square"), return it.
Otherwise, return 0.

Examples:

ft_sqrt(4)    // returns 2
ft_sqrt(9)    // returns 3
ft_sqrt(196)  // returns 14
ft_sqrt(0)    // returns 0
ft_sqrt(-4)   // returns 0
ft_sqrt(10)   // returns 0   (not a perfect square)
==========================================================================================
*/

int	ft_sqrt(int nb)
{
	int n = 1;

	while (n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(-2));
}