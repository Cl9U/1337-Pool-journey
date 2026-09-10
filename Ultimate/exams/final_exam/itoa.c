#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
	int 	dlen;
	long 	n;
	int 	s;
	char 	*str;
	n = nbr;
	s = (n < 0);
	if (s)
		n = -n;

	long sn = n;
	dlen = 1;
	while (n >= 10)
	{
		n /= 10;
		dlen++;
	}
	str = malloc((dlen + s + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[dlen + s] = '\0';
	if (s)
		str[0] = '-';
	while (dlen > 0)
	{
		str[s + dlen - 1] = (sn % 10) + '0';
		sn /= 10;
		dlen--;
	}
	return (str);
}

int main()
{
	printf("%s\n", ft_itoa(0));
	
}