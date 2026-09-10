/* 
Assignment name  : compress
Expected files   : compress.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter and displays a compressed
version of it, followed by a newline.

The string is read from left to right and split into groups:

- A group of digits is any maximal sequence of consecutive digit characters,
  even if the digits are different from each other. Such a group is replaced
  by the sum of its digits, and that sum is summed again and again until only
  one digit remains.

- A group of non-digit characters is any maximal sequence of the same
  character repeated. Such a group is replaced by that character, followed by
  the number of times it appeared. If the character appeared only once,
  nothing is written after it.

Spaces are characters like any other and follow the same rule.

If the number of parameters is different from 1, the program displays only a
newline.

Examples:

$> ./compress "jack1233sydney56" | cat -e
jack9sydney2$
$> ./compress "jackkkk" | cat -e
jack4$
$> ./compress "www  ww" | cat -e
w3 2w2$
$> ./compress "hello world" | cat -e
hel2o world$
$> ./compress "aaa111bbb" | cat -e
a33b3$
$> ./compress "999" | cat -e
9$
$> ./compress "abc" | cat -e
abc$
$> ./compress "" | cat -e
$
$> ./compress "ab" "cd" | cat -e
$
$> ./compress | cat -e
$
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum = sum + (n % 10);
		n /= 10;
	}
	return (sum);
}

int sum_digit(int n)
{
	while (n > 9)
	{
		n = sum(n);
	}
	return (n);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int	j = 0;
	int r = 0;
	int k = 0;
	int sum = 0;
	char c ;
	while (av[1][i])
	{
		if (!(av[1][i] >= '0' && av[1][i] <= '9'))
		{
			j = 1;
			while (av[1][i + j] == av[1][i] && av[1][i] && !(av[1][i] >= '0' && av[1][i] <= '9'))
				j++;
			if (j > 1)
			{
				write(1, &av[1][i], 1);
				c = j + '0';
				write(1, &c, 1);
			}
			else
				write(1, &av[1][i], 1);
		}
		if (av[1][i + j] >= '0' && av[1][i + j] <= '9')
		{
			while (av[1][i + j] >= '0' && av[1][i + j] <= '9')
			{
				r = r * 10 + (av[1][i + j] - '0');
				j++;
			}
			
			sum = sum_digit(r);
			c = sum + '0';
			write(1, &c, 1);
		}
		i += j;
	}
	write(1, "\n", 1);
}