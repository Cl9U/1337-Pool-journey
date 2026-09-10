#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool isPalindrome(char* s)
{
	int i = 0;
	int j = 0;
	int len = ft_strlen(s);
	int slen = 0;
	while (s[i])
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
			slen++;
		i++;
	}
	
	char str[slen + 1];
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9' )
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[slen] = '\0';
	i = 0;
	slen--;
	while (i < slen)
	{
		if (str[i] != str[slen])
			return (0);
		i++;
		slen--;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	//isPalindrome(av[1]);
	printf("%d", isPalindrome(av[1]));
	//write(1, "\n", 1);
}