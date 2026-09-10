#include <unistd.h>
#include <stdio.h>

int	gcd(int a, int b)
{
	int tmp;

	while (b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return (a);
}

int	lcm(int a, int b)
{
	return ((a * b) / gcd(a, b));
}

int main()
{
	int i = 5;
	int j = 7;
	printf("%d\n", lcm(i, j));
}