/* 
6. first_word
-------------

Write a program that receives exactly one string.

Print its first word followed by a newline.

A word is a sequence of characters separated by spaces or tabs.

If the number of arguments is not exactly one, or the string contains no word, print only a newline.

Examples:

./first_word "   hello world"
hello

./first_word "one"
one

*/

#include <unistd.h>

int main(int ac,char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	int i = 0;

	while (av[1][i] == ' ' || av[1][i] == '\t')
		i++;
	while (av[1][i] && (av[1][i] != ' ') && (av[1][i] != '\t'))
	{
		write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}