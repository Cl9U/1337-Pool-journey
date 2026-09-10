/* 
7. rev_print
------------

Write a program that receives exactly one string.

Print the string in reverse order followed by a newline.

If the number of arguments is not exactly one, print only a newline.

Examples:

./rev_print "hello"
olleh

./rev_print "abc"
cba
*/

#include <unistd.h>

int ft_strlen(char *s)
{
	int i = 0;
	 while (s[i])
	 	i++;
	return (i); 
}

int main(int ac,char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	int len = ft_strlen(av[1]) - 1;
	while (len >= 0)
	{
		write(1, &av[1][len], 1);
		len--;
	}
	write(1, "\n", 1);
	return (0);
}
