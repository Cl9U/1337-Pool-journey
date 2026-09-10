/* \2. hidden_string
----------------

Write a program that receives exactly two strings.

Print 1 followed by a newline if every character of the first string appears in the second string in the same order.

The characters do not need to be consecutive.

Otherwise, print 0 followed by a newline.

If the number of arguments is not exactly two, print 0 followed by a newline.

Examples:

./hidden_string "abc" "a12bxyz3c"
1

./hidden_string "abc" "acb"
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
	int j = 0;
	while (av[2][i])
	{
		if (av[1][j] == av[2][i])
			j++;
		if (!av[1][j])
		{
			write(1, "1\n", 2);
			return (0);
		}
		i++;
	}
	write(1, "0\n", 2);
	return (0);
}