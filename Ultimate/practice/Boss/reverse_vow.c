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

char* reverseVowels(char* s) 
{
	int l = ft_strlen(s);
	char *str;
	str = 
	// int i = 0;
	// int f;
	// int e;
	// char tmp;

	// while (i < l)
	// {
	// 	if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o'
	// 		||s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U' || s[i] == 'O')
	// 		f = i;
	// 	if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'u' || s[l] == 'o'
	// 		||s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'U' || s[i] == 'O')
	// 	{
	// 		tmp = s[f];
	// 		s[f] = s[l];
	// 		s[l] = tmp;
	// 	}
	// 	l--;
	// 	i++;
	// }
	printf("%d", l);
}

int main()
{
	char s[] = "adam";
	reverseVowels(s);
}
