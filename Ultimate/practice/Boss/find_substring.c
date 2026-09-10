/* Assignment name : find_substring
Expected files : find_substring.c
Allowed functions: write
Write a program that prints the starting index (0-based) of the first occurrence of the second
argument (pattern) in the first argument (text). If not found, print -1 and newline.
$> ./find_substring 'hello world' 'world' | cat -e
6$
*/
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
	while (av[1][i])
	{
		j = 0;
		while (av[1][i + j] == av[2][j] && av[2][j])
			j++;
		if (!av[2][j])
			return (printf("%d\n",i), 0);
		i++;
	}
	
	//write(1, "\n", 1);
}