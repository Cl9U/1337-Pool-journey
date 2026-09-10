int is_palindrome(int n)
{
	long nn;
	long rev;
	long dg;

	nn = n;
	rev = 0;
	dg = 0;

	while (nn > 0)
	{
		dg = nn % 10;
		rev = rev * 10 + dg;
		nn /= 10;
	}
	
	if (rev == n)
		return (1);
	return (0);
}

#include <stdio.h>
int main()
{
	printf("%d", is_palindrome(1212));
}