/* 
Assignment name  : ft_swap_words
Expected files   : ft_swap_words.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that swaps adjacent pairs of words in a string (Word 1 <-> Word 2, 
Word 3 <-> Word 4, etc.) in-place.

A "word" is defined as a contiguous sequence of non-space characters delimited 
by spaces (' ') or the boundaries of the string.

Rules:
  - You must modify the string IN-PLACE. No extra buffers or memory allocations 
    are allowed.
  - If a string contains an odd number of words, the final word stays in its 
    original position.
  - The spaces between words must remain in their original relative positions.
  - The function returns a pointer to the modified string (`s`).
  - If `s` is NULL, return NULL.

Your function must be declared as follows:

char    *ft_swap_words(char *s);
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	count_word(char *s)
{
	int count;
	int in_word;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != ' ')
		{
			if (!in_word)
			{
				count ++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		s++;
	}
	return (count);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	str_rev(char *s, int len)
{
	int i = 0;
	char tmp;
	while (i < len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		len--;
		i++;
	}
}

void	word_rev(char *s, int start, int end)
{
	char tmp;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		end--;
		start++;
	}
}
char    *ft_swap_words(char *s)
{
	int word = count_word(s);
	int len = ft_strlen(s) - 1;
	int i = 0;
	int start = 0;
	int end = 0;
	int k;

	if (word % 2 == 0)
	{
		str_rev(s, len);

		while (s[i])
		{
			if(s[i] != ' ')
				end++;
			k = i;
			while (s[k] == ' ')
				k++;
			word_rev(s, start, end);
			start = k;
			i++;
		}
		
	}
	return (s);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	printf("%s", ft_swap_words(av[1]));
	//write(1, "\n", 1);
}