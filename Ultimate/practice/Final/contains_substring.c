/* 5. contains_substring
---------------------

Write a program that receives exactly two strings.

Print 1 followed by a newline if the complete second string appears inside the first string as consecutive characters.

Otherwise, print 0 followed by a newline.

If the number of arguments is not exactly two, print 0 followed by a newline.

Examples:

./contains_substring "hello world" "lo wo"
1

./contains_substring "abcdef" "ace"
0
*/

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "0\n", 2);
		return (0);
	}
	int i = 0;
	int j;

	while (av[1][i])
	{
		j = 0;
		while (av[1][i + j] == av[2][j] && av[2][j])
			j++;
		if (!av[2][j])
		{
			write(1, "1\n", 2);
			return (0);
		}
		i++;
	}
	write(1, "0\n", 2);
	return (0);
}