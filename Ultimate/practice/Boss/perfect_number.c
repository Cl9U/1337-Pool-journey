#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int n = atoi(av[1]);
	int i = 1;
	int count = 0;

	if (n <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (i <= n / 2)
	{
		if (n % i == 0)
			count += i;
		i++;
	}
	if (n == count)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	return (0);
}