/* ==========================================================================================
Assignment name  : even
Expected files   : even.c
Allowed functions: write
Version          : 1
--------------------------------------------------------------------------------

Write a program that display all even digits from 0 to 10, followed by a
newline '\n'.

Example:

$> ./even
0246810
$> ./even | cat -e
0246810$
$>
========================================================================================== */

#include <unistd.h>

int	main(void)
{
	int i;
	char c;

	i = 0;
	while (i <= 10)
	{
		if (i == 10)
		{
			c = i / 10 + '0';
			write(1, &c, 1);
			c = i % 10 + '0';
			write(1, &c, 1);
			break;
		}
		if (i % 2 == 0)
		{
			c = i + '0';
			write(1, &c, 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
