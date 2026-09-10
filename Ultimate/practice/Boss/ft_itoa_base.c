#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_ctd(long n, int blen)
{
	int dlen = 1;
	while (n >= blen)
	{
		n /= blen;
		dlen++;
	}
	return (dlen);
}

char *ft_itoa_base(int value, int base)
{
	char *hex = "0123456789ABCDEF";
	char *str;
	int dlen;
	long n = value;
	int s = 0;

	if (n < 0)
	{
		s = 1;
		n = -n;
	}
	dlen = ft_ctd(n, base);
	if (base != 10)
		s = 0;
	str = malloc((dlen + s + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (s)
		str[0] = '-';
	str[dlen + s] = '\0';
	while (dlen > 0)
	{
		str[(dlen + s) - 1] = hex[n % base];
		n /= base;
		dlen--;
	}
	return (str);
}

int main(int ac, char **av)
{
	printf("%s\n", ft_itoa_base(atoi(av[1]) , atoi(av[2])));
}