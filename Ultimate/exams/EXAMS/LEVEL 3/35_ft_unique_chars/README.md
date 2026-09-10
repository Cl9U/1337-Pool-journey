==========================================================================================
Assignment name  : ft_unique_chars
Expected files   : ft_unique_chars.c
Allowed functions: write, malloc, free
------------------------------------------------------------------------------------------

Write a program that takes a string and displays only the characters that
appear exactly once, in order of first appearance, followed by a newline.

If the number of arguments is not 1, display only a newline.

Examples:

$>./ft_unique_chars "abcabc" | cat -e
$
$>./ft_unique_chars "abcdef" | cat -e
abcdef$
$>./ft_unique_chars "hello world" | cat -e
he wrd$
$>./ft_unique_chars "aabbccd" | cat -e
d$
$>./ft_unique_chars | cat -e
$
==========================================================================================