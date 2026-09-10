==========================================================================================
Assignment name  : ft_is_printable
Expected files   : ft_is_printable.c
Allowed functions: write
------------------------------------------------------------------------------------------

Write a function that returns 1 if every character in the string is a
printable ASCII character (32 to 126 inclusive), and 0 otherwise.
An empty string returns 1.

Your function must be declared as follows:

int	ft_is_printable(char *str);

Examples:

ft_is_printable("Hello World!")   // returns 1
ft_is_printable("abc\tdef")       // returns 0 (tab is not printable)
ft_is_printable("")               // returns 1
==========================================================================================