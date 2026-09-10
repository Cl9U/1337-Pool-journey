int rev_int(int n)
{
	long nn;
	long dg;
	long rev;
	int neg;

	neg = (n < 0);
	nn = n;
	if (neg)
		nn = -nn;
	dg = 0;
	rev = 0;
	while (nn > 0)
	{
		dg = nn % 10;
		rev = rev * 10 + dg;
		nn /= 10;
	}
	if (neg)
		rev = -rev;
	if (rev < -2147483648 || rev > 2147483647)
		return (0);
	return (rev);
}
#include <stdio.h>
int main()
{
	printf("%d", rev_int(153423));
}