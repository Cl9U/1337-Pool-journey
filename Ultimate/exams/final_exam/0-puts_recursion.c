#include <unistd.h>
void ft_puts_recursion(char *s)
{
	if (!*s)
	{
		write(1, "\n", 1);
		return;
	}
	write(1, s, 1);
	ft_puts_recursion(s + 1);
	
}
int main()
{
	char str[] = "hello world ftg";
	ft_puts_recursion(str);
}
