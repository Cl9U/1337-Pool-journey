#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}



int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int len = ft_strlen(av[1]);
	char str[len + 1];
	int i = 0;
	int j = 0;

	while (av[1][i])
	{
		while (av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13))
			i++;
		while (!(av[1][i] == ' ' || (av[1][i] >= 9 && av[1][i] <= 13)))
			{
				str[j] = av[1][i];

			}
	}
	
	write(1, "\n", 1);
}