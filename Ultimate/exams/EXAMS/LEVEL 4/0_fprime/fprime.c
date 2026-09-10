/* ================================================================================
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there's one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
================================================================================ */
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(long n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if ( n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int n = atoi(av[1]);
	int i = 2;
	int f = 1;
	while (i <= n / i)
	{
		while (n % i == 0)
		{
			if (!f)
				write(1, "*", 1);
			ft_putnbr(i);
			f = 0;
			n /= i;
		}
		i++;
	}
	if (n > 1 || f)
	{
		if (!f)
			write(1, "*", 1);
		ft_putnbr(n);
	}
	write(1, "\n", 1);
	return (0);
}
