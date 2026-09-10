/*==========================================================================================
Assignment name  : aff_middle_char
Expected files   : aff_middle_char.c
Allowed functions: write
------------------------------------------------------------------------------------------

Write a program that takes a string and displays its middle character(s),
followed by a newline.

If the string has an odd length, display the single middle character.
If the string has an even length, display the two middle characters.
If the number of arguments is not 1, or the string is empty, display only
a newline.

Examples:

$>./aff_middle_char "hello" | cat -e
l$
$>./aff_middle_char "abcd" | cat -e
bc$
$>./aff_middle_char "a" | cat -e
a$
$>./aff_middle_char "" | cat -e
$
==========================================================================================*/

#include <unistd.h>

int ft_strlen(char *s)
{
	int i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int len;

	len = ft_strlen(av[1]);

	if (len % 2 != 0)
		write(1, &av[1][len / 2], 1);
	else
	{
		write(1, &av[1][(len / 2) - 1], 1);
		write(1, &av[1][len / 2], 1);
	}
	return (0);
}