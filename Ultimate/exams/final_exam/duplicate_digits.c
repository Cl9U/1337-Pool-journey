int ft_dgl(int n)
{
	int i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int has_duplicate_digits(int n)
{
	int dgl = ft_dgl(n) + 1;
	int count = 0;
	char s[dgl + 1];
	int i = 0;
	i = dgl - 1;
	while (i >= 0)
	{
		s[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	s[dgl] = '\0';
	i = 0;
	int j;
	while (s[i])
	{
		j = i + 1;
		while (s[j])
		{
			if(s[i] == s[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
#include <stdio.h>
int main()
{
	printf("%d", has_duplicate_digits(123451));
}