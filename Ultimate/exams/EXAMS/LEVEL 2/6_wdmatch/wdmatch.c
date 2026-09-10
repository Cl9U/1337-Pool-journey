/*
** wdmatch.c
** Checks if s1 is a subsequence of s2 (characters of s1 appear in s2
** in the same order, not necessarily contiguous).
** If so, prints s1 followed by '\n'. Otherwise prints just '\n'.
** If argc != 3, prints just '\n'.
*/

#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	is_match(char *s1, char *s2)
{
	int	i;
	int	j;
 
	i = 0;
	j = 0;
	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	return (s1[i] == '\0');
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (is_match(argv[1], argv[2]))
	{
		write(1, argv[1], ft_strlen(argv[1]));
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}