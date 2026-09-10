#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int i = 0;
	char stck[1000];
	int top = -1;
	char c;
	char last;
	while (av[1][i])
	{
		c = av[1][i];
		if (c == '(' || c == '{' || c == '[')
			stck[++top] = c;
		else if (c == ')' || c == '}' || c == ']')
		{
			if (top == -1)
				return (write(1, "KO!\n", 4), 0);
			last = stck[top--];
			if ((c == ')' && last != '(')
				|| (c == '}' && last != '{')
				|| (c == ']' && last != '['))
				return (write(1, "KO!\n", 4), 0);
		}
		i++;
	}
	if (top == -1)
		return (write(1, "OK!\n", 4), 0);
	else 
		return (write(1, "KO!\n", 4), 0);
	write(1, "\n", 1);
}