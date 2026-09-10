#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *s)
{
	int i;
	i = 0;
	while (s[i])
	i++;
	return (i);
}

int ft_countword(char *s)
{
	int count;
	int in_word;

	count = 0;
	in_word = 0;

	while (*s)
	{
		if(!(*s == ' ' || *s >= 9 && *s <= 13))
		{
			if(!in_word)
			{
				count++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		s++;
	}
	return (count);
}

void	rev_law(char *s)
{
	int sep = 0;
	int len;
	int	en;
	int i;

	len = ft_strlen(s) - 1;
	while (s[len] == ' ')
		len--;
	//printf("%c-sep\n", s[len]);
	if (ft_countword(s) > 1)
	{
		while (len)
		{
			if (s[len] == ' ')
				break;
			write(1, &s[len], 1);
			len--;
		}
		write(1, " ", 1);
	}
	en = len - 1;
	i = 0;
	while (i < en)
	{
		while (s[i] == ' ')
			i++;
		if (s[i] && i < en)
		{
			if (sep)
				write(1, " ", 1);
			sep = 1;
			while (s[i] && s[i] != ' ')
			{
				write(1, &s[i++], 1);	
			}
			
		}
	}
}

int main()
{
	char str[] = "    hello   ";
	rev_law(str);
}