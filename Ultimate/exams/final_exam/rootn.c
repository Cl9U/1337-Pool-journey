#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	(void)ac;
	int n = atoi(av[2]);
	int i = 0;

	while (av[1][i])
	{
		if (av[1][i] >= 'a' && av[1][i] <= 'z')
		{
			av[1][i] = (av[1][i] - 'a' + n) % 26 + 'a';
				write(1, &av[1][i], 1);	
		}
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			av[1][i] = (av[1][i] - 'A' + n) % 26 + 'A';
				write(1, &av[1][i], 1);	
		}
		else 
			write(1, &av[1][i], 1);
		i++;
	}
	return (0);	
}