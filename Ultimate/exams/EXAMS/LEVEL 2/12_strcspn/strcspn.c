/*
** ft_strcspn - calculate the length of the initial segment of s which
** consists entirely of characters not in reject.
*/

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	count;
	size_t	i;
	int		found;

	count = 0;
	while (s[count])
	{
		i = 0;
		found = 0;
		while (reject[i])
		{
			if (s[count] == reject[i])
			{
				found = 1;
				break ;
			}
			i++;
		}
		if (found)
			break ;
		count++;
	}
	return (count);
}