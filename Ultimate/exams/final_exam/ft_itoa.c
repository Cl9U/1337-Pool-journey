#include <stdlib.h>
int dg_count(long n)
{
	int ct = 1;
	while (n >= 10)
	{
		n /= 10;
		ct++;
	}
	return (ct);
}
char *ft_itoa(int n)
{
	long nn;
	int s;
	char *str;

	s = (n < 0);
	nn = n;

	if (s)
		nn = -nn;
	int dgl = dg_count(nn);
	str = malloc((dgl + s + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str [dgl + s] = '\0';
	if (s)
		str[0] = '-';
	while (dgl > 0)
	{
		str[dgl + s - 1] = nn % 10 + '0';
		nn /= 10;
		dgl--;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	printf("%s\n", ft_itoa(-42));
}