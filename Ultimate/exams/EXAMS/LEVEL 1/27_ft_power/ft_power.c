/*
==========================================================================================
Assignment name  : ft_power
Expected files   : ft_power.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Write a function that returns the value of a power applied to a number.
An exponent of 0 always gives 1. A negative exponent returns 0.

Your function must be declared as follows:

int	ft_power(int nb, int power);

Examples:

ft_power(2, 10)   // returns 1024
ft_power(5, 3)    // returns 125
ft_power(7, 0)    // returns 1
ft_power(0, 5)    // returns 0
ft_power(3, -1)   // returns 0
==========================================================================================
*/
#include <stdio.h>
int	ft_power(int nb, int power)
{
	int sum;

	sum = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (--power)
	{
		sum = sum * nb;
	}
	return (sum);
}
int main()
{
	printf("%d\n",ft_power(-3, 6));
}