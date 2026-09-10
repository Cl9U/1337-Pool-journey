/*
==========================================================================================
Assignment name  : ft_factorial
Expected files   : ft_factorial.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Write a function that returns the factorial of the number given as parameter.
If the number is negative, the function returns 0. The factorial of 0 is 1.

Your function must be declared as follows:

int	ft_factorial(int nb);

Examples:

ft_factorial(5)    // returns 120
ft_factorial(0)    // returns 1
ft_factorial(1)    // returns 1
ft_factorial(-3)   // returns 0
ft_factorial(10)   // returns 3628800
==========================================================================================
*/
#include <stdio.h>

int	ft_factorial(int nb)
{
	int sum;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	sum = nb;
	while (--nb)
	{
		sum = sum * nb;
	}
	return (sum);
}

int main()
{
	printf("%d\n",ft_factorial(10));
}