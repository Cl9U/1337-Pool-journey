void reverseString(char* s, int sSize) {
    
	int i = 0;
	char tmp;

	sSize--;
	while (i < sSize)
	{
		tmp = s[i];
		s[i] = s[sSize];
		s[sSize] = tmp;
		i++;
		sSize--;
	}
}

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
	reverseString(av[1], 5);
	printf("%s",av[1]);
	write(1, "\n", 1);
}