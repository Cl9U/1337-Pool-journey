#include <unistd.h>
void print_bits(unsigned char byte)
{
	int i = 7;
	char c;
	while (i >= 0)
	{
		if ((byte >> i) & 1)
			c = '1';
		else
			c = '0';
		write(1, &c, 1);
		i--;
	}
}

int main()
{
	print_bits(5);
}