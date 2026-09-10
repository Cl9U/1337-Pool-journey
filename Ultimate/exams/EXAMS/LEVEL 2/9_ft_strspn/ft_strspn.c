/*
** ft_strspn - calculate the length of the initial segment of s which
** consists entirely of characters in accept.
*/

#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	count;
	size_t	i;
	int		found;

	count = 0;
	while (s[count])
	{
		i = 0;
		found = 0;
		while (accept[i])
		{
			if (s[count] == accept[i])
			{
				found = 1;
				break ;
			}
			i++;
		}
		if (!found)
			break ;
		count++;
	}
	return (count);
}