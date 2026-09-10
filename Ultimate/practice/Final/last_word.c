/* 

The key is repeated as many times as necessary.

Rules:

- Preserve the case of letters.
- Print non-alphabetical characters unchanged.
- Non-alphabetical characters do not consume a key character.
- If the number of arguments is different from 3, display only a newline.


VIGENERE MOVEMENTS SUMMARY
--------------------------

alpha_position -> convert a letter to a value from 0 to 25
shift_lowercase -> shift and wrap lowercase letters
shift_letter -> preserve uppercase or lowercase
caesar -> apply one fixed shift across a full string
repeat_key -> repeat a shorter key
key_positions -> derive numeric shifts from key letters
keyed_shift -> advance the key only for message letters
vigenere -> combine every cipher movement


==================================================
PART 4 — WORD REVERSAL AND PARAMETER REVERSAL
==================================================

25. last_word
-------------

Write a program that receives exactly one string.

Print its final word followed by a newline.

Spaces and tabs are separators.

If the number of arguments is not exactly one, or the string contains no word, print only a newline.

Example:

./last_word "   hello big world   "

Output:

world
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
	int i = 0;
	int len = ft_strlen(av[1]) - 1;
	// while (av[1][i] == ' ' || av[1][i] == '\t')
	// 	i++;
	while(av[1][len] == ' ' || av[1][len] == '\t')
		len--;
	//len--;
	while (!(av[1][len] == ' ' || av[1][len] == '\t'))
	{
		//write(1, &av[1][len], 1);
		len--;
	}
	len++;
	while (!(av[1][len] == ' ' || av[1][len] == '\t') && av[1][len])
	{
		write(1, &av[1][len], 1);
		len++;
	}
	
	write(1, "\n", 1);
}