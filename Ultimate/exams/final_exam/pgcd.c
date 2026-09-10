int pgcd(int a, int b)
{
	int cdiv;
	while (b != 0)
	{
		cdiv = a % b;
		a = b;
		b = cdiv;
	}
	return (a);
}

#include <stdio.h>
int main()
{
	printf("%d", pgcd(48, 18));
}