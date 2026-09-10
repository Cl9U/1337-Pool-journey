/* ==========================================================================================
Assignment name  : digit_sum
Expected files   : digit_sum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a single positive integer as a string argument and displays
the result of repeatedly summing its digits until only one digit remains to the
standard output, followed by a \n.

The input will always be a valid non-negative integer (no need to handle invalid
characters or negative values).

If the number of arguments is not 1, the program displays a \n.

Examples:
$>./digit_sum "0" | cat -e
0$
$>./digit_sum "1337" | cat -e
5$
$>./digit_sum "10" | cat -e
1$
$>./digit_sum "999" | cat -e
9$
$>./digit_sum "123" | cat -e
6$
$>./digit_sum "241" | cat -e
7$
$>./digit_sum "12" "34" "56" | cat -e
$
$>./digit_sum | cat -e
$
-e
========================================================================================== */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int sum(int a)
{
	int sum;

	sum = 0;
	while (a > 0)
	{
		sum = sum + (a % 10);
		a /= 10;
	}
	return (sum);
}

int	main(int ac, char **av)
{
	int a;

	a = atoi(av[1]);

	while (a > 9)
	{
		a = sum(a);
	}
	printf("%d\n", a);
}
