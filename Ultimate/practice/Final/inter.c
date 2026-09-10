/* 
3. inter
--------

Write a program that receives exactly two strings.

Print the characters that appear in both strings:

- Follow their order in the first string.
- Do not print any character more than once.

Always finish with a newline.

If the number of arguments is not exactly two, print only a newline.

Example:

./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj"

Output:

padinto

*/

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	int j = 0;
	char feq[256] = {};

	while (av[1][i])
	{
		j = 0;
		while (av[2][j])
		{
			if (av[1][i] == av[2][j] && feq[av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				feq[av[1][i]] = 1;
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
