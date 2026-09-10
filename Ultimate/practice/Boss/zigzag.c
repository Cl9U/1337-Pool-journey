#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_swp(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

char *ft_zigzag(char *str)
{
	int i = 0;
	int slen = ft_strlen(str);
	int len = slen - 1;
	char s[slen];
	s[slen] = '\0';
	int j = 0;
	while (i < len )
		{
			s[j++] = str[i];
			s[j++] = str[len];
			i++;
			len--;
		}
	if (slen % 2 != 0)
		s[j++] = str[i];
	str = s;
	return (str);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	printf("%s",ft_zigzag(av[1]));
	//write(1, "\n", 1);
}