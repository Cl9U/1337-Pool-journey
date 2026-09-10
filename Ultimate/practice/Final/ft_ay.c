#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int j = 0;
	int count = 0;
	while (av[1][i])
	{
		if (!av[2][j])
		{
			j = 0;
		}
		if(av[1][i] == av[2][j])
			j++;
		if (!av[2][j])
			count++;
		i++;
	}
	printf("%d\n", count);
}