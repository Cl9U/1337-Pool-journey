/*
** ft_strpbrk - locate the first occurrence in the string s1 of any
** of the characters in the string s2.
*/

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char	*p1;
	const char	*p2;

	p1 = s1;
	while (*p1)
	{
		p2 = s2;
		while (*p2)
		{
			if (*p1 == *p2)
				return ((char *)p1);
			p2++;
		}
		p1++;
	}
	return (NULL);
}