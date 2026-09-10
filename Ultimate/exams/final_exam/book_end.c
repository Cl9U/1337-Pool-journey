/* 
Assignment name  : book_end
Expected files   : book_end.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that takes a string as a parameter, reads an integer from the
beginning of it, and returns that integer as an int.

The string is read from left to right, in three phases:

1. Leading whitespace characters are skipped.
2. An optional sign, '+' or '-', may then appear. At most one sign is read.
3. The following characters are read as long as they are digits, and are
   converted into the returned value. Reading stops at the first character
   that is not a digit, and everything after that point is ignored.

If phase 3 reads no digit at all, the function returns 0.

Your function must be declared as follows:

int    book_end(const char *str);

Examples:

book_end("             42")  ->  42
book_end("        -42")      ->  -42
book_end("      +-353")      ->  0
book_end("hello")            ->  0
book_end("    123jack")      ->  123
*/
int	book_end(const char *str)
{
	int i = 0;
	int s = 1;
	int r = 0;
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * s);
}