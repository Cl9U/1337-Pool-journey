#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int **nb)
{

	long	n;

	n = **nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		int *ne;
		*ne = n / 10;
		ft_putnbr(&ne);
	}
	ft_putchar((n % 10) + '0');
}


int main()
{
	int i = 18;
	int *p = &i;
	ft_putnbr(&p);
}