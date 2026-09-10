/*
==========================================================================================
Assignment name  : ft_str_is_anagram
Expected files   : ft_str_is_anagram.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Returns 1 if s1 and s2 are anagrams of each other (same characters, same
frequency, case-insensitive, ignoring spaces), 0 otherwise.

Your function must be declared as follows:

int	ft_str_is_anagram(char *s1, char *s2);
==========================================================================================
*/

int	ft_str_is_anagram(char *s1, char *s2)
{
	char	feq[256] = {0};
	// char	feq1[256] = {0};
	int i;

	i = 0;
	while (s1[i])
	{
		feq[(unsigned char)s1[i]]++;
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (feq[(unsigned char)s2[i]] == 0)
			return 0;
		feq[(unsigned char)s2[i]]--;
		i++;
	}
	i = 0;
	while (i < 256)
	{
		if (feq[i] != 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char str[] = "aa";
	char str1[] = "aa";
	printf("%d\n", ft_str_is_anagram(str, str1));
}