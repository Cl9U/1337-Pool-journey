/* 
Assignment name : reverse_string
Expected files : reverse_string.c
Allowed functions: write
Write a program that reverses the first argument string and prints the reversed string followed by a
newline. If no argument, print newline.
$> ./reverse_string "Hello" | cat -e
olleH$
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	char tmp;
	int i = 0;
	int len = ft_strlen(av[1]) - 1;
	while (i < len)
	{
		tmp = av[1][i];
		av[1][i] = av[1][len];
		av[1][len] = tmp;
		len--;
		i++;
	}
	printf("%s",av[1]);
	fflush(stdout);
	write(1, "\n", 1);
}