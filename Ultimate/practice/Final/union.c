/* 4. union
--------

Write a program that receives exactly two strings.

Print every character that appears in either string:

- First follow the order of the first string.
- Then follow the order of the second string.
- Do not print any character more than once.

Always finish with a newline.

If the number of arguments is not exactly two, print only a newline.

Example:

./union "zpadinton" "paqefwtdjetyiytjneytjoeyjnejeyj"

Output:

zpadintoqefwjy
*/

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 3)
		return (write(1, "\n", 1), 0);
	int i = 0;
	char feq[256] = {};

	while (av[1][i])
	{
		if (feq[av[1][i]] == 0)
		{
			write(1, &av[1][i], 1);
			feq[av[1][i]] = 1;
		}
		i++;
	}
	i = 0;
	while (av[2][i])
	{
		if (feq[av[2][i]] == 0)
		{
			write(1, &av[2][i], 1);
			feq[av[2][i]] = 1;
		}
		i++;
	}
}