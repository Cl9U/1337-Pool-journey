#include <unistd.h>

void ft_putnbr(int n)
{
	long nn;
	char c;

	nn = n;
	if (nn < 0)
	{
		write(1, "-", 1);
		nn = -nn;
	}
	if (nn >= 10)
		ft_putnbr(nn / 10);
	c = nn % 10 + '0';
	write(1, &c, 1);
}
int  ft_atoi(char *str)
{
	int i;
	int s = 1;
	int r = 0;
	i = 0;

	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13) 
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	ft_putnbr(r * s);
}