#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
		write(1, &c, 1);
}
void printrecu(int n)
{
	 
	if (n > 100)
		return ;
	printf("%d\n", n);
	printrecu(n + 1);
}
int main()
{
	printrecu(0);
}
	// char c;
	// if (i == 100)
	// 	return ;
	// // if (n < 10);
	// // {
	// // 	c = n % 10 + '0';
	// // 	write(1, &c, 1);
	// // }
	// if(n >= 10)
	// {	
	// 	printrecu(n / 10, i + 1);
	// }
	// n = n - 1;

	// c = n % 10 + '0';
	// write(1, &c, 1);

	// write(1, "\n", 1);