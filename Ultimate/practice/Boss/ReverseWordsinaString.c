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

void ft_swp(char *s, int f, int e)
{
	char tmp;
	while (f < e)
	{
		tmp = s[f];
		s[f] = s[e];
		s[e] = tmp;
		f++;
		e--;
	}
}

char *reverseWords(char* s) {
    int i = 0;
	int len = ft_strlen(s) - 1;
	int f = 0;
	int e = 0;
	int j = 0;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;

	f = i;
	while (len >= 0 && s[len] == ' ' || (s[len] >= 9 && s[len] <= 13))
		len--;

	ft_swp(s, f, len);

	i = f;
	while (s[i])
	{
		while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
			i++;

		f = i;
		while (!(s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)) && s[i])
			i++;

		ft_swp(s, f, i - 1);
	}
	
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
			i++;

		if (s[i])
		{
			if (j > 0)
				s[j++] = ' ';

			while (s[i] && !(s[i] == ' '
					|| (s[i] >= 9 && s[i] <= 13)))
				s[j++] = s[i++];
		}
	}
	s[j] = '\0';
	return (s);
}

int main(int ac, char **av)
{
	if (ac <= 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	printf("%s", reverseWords(av[1]));
}