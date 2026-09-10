#include <unistd.h>

int main(int ac ,char **av)
{
	int i;
	int j;
	int f;

	f = 0;
	i = 0;
	while (av[1][i])
	{
		j = 0;
		while (av[1][j])
		{
			if (av[1][i] == av[1][j])
				f++;
			j++;
		}
		if(f == 1)
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}