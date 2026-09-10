==========================================================================================
Assignment name  : ft_convert_base2
Expected files   : ft_convert_base2.c
Allowed functions: malloc, free
------------------------------------------------------------------------------------------

Write a function that converts a string representation of a number in one base
to a string representation of the same number in another base.

Both bases are given as strings where each character represents a digit.
A base is valid if it has at least 2 characters, no duplicate characters,
and no '+' or '-'. If either base is invalid, return NULL.

The number can be preceded by any number of '+' and '-'. Handle whitespace
(spaces and tabs) before the sign characters.

Your function must be declared as follows:

char	*ft_convert_base2(char *nbr, char *base_from, char *base_to);

Examples:

ft_convert_base2("101", "01", "0123456789")       // returns "5"
ft_convert_base2("FF", "0123456789ABCDEF", "01")   // returns "11111111"
ft_convert_base2("42", "0123456789", "01234567")   // returns "52"
==========================================================================================