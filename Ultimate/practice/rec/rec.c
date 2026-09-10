// int mk(char *s, int i)
// {
// 	char c = '0';
// 	while (s[i])
// 	{
// 		s[i] = c;
// 		c++;
// 		i++;
// 	}
// 	return (i);
// }
#include <stdio.h>
char mk(char *s,int n)
{
	if (n == 9)
		return (0);
	*s = n + '0';
	return(n + mk(s + 1, n + 1));
	// *s = (8 - n) + '0';
}

int fill(char *s)
{
	int res = mk(s, 0);
	return (res);
}

int main()
{
	char s[10];

	int j = fill(s);
	printf("s = %s,num = %d", s,j);
}