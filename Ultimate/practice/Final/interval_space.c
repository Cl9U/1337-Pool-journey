#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	int a;
	int b;

	a = atoi(av[1]);
	b = atoi(av[2]);

	int avr;

	if ( a < b)
	{
		while ( a <= b)
			printf("%d ", a++);
	}
	else
	{
		avr = a - b;
		while ( b <= a)
			printf("%d ", b++);
	}
}