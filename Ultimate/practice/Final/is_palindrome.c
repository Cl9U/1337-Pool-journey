/* 
8. is_palindrome
----------------

Write a program that receives exactly one string.

Print:

- 1 followed by a newline if the string reads the same from left to right and right to left.
- 0 followed by a newline otherwise.

Character comparison is case-sensitive.

If the number of arguments is not exactly one, print 0 followed by a newline.

Examples:

./is_palindrome "radar"
1

./is_palindrome "hello"
0

./is_palindrome "Radar"
0
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int len = ft_strlen(av[1]) - 1;
	int i = 0;
	while (i < len)
	{
		if (av[1][i] != av[1][len])
		{
			write(1, "0\n", 1);
			return (0);
		}
		i++;
		len--;
	}
	write(1, "1\n", 2);
	return (0);
}