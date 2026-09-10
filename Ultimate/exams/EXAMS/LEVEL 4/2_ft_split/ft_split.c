/* 
================================================================================
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
================================================================================
*/

#include <stdlib.h>
#include <stdio.h>

int is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int ft_wct(char *str)
{
	int iwd = 0;
	int wct = 0;
	while (*str)
	{
		if (!is_sep(*str))
		{
			if(!iwd)
			{
				wct++;
				iwd = 1;
			}
		}
		else
			iwd = 0;
		str++;
	}
	return (wct);
}

int	wdlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i]))
		i++;
	return (i);
}

char *get_wd(char *str, int len)
{
	char *word;
	int i = 0;
	word = malloc(sizeof(char) * len + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	int wct = ft_wct(str);
	char **strs;
	strs = malloc(sizeof(char *) * (wct + 1));
	if (!strs)
		return (NULL);
	int i = 0;
	int len = 0;
	while (*str)
	{
		if (!is_sep(*str))
		{
			len = wdlen(str);
			strs[i] = get_wd(str, len);
			i++;
			str += len;
		}
		else
			str++;
	}
	strs[i] = '\0';
	return (strs);
}

int main()
{
	char **strs = ft_split("hello word for ever");
	int i = 0;
	while (strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	return (0);
}