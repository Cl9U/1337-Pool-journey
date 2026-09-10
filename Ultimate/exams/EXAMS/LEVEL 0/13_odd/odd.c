#include <unistd.h>

int	main(void)
{
	int i;
	char c;

	i = 1;
	while (i <= 9)
	{

		if (i % 2 == 1)
		{
			c = i + '0';
			write(1, &c, 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}