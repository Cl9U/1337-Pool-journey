==========================================================================================
Assignment name  : aff_middle_char
Expected files   : aff_middle_char.c
Allowed functions: write
------------------------------------------------------------------------------------------

Write a program that takes a string and displays its middle character(s),
followed by a newline.

If the string has an odd length, display the single middle character.
If the string has an even length, display the two middle characters.
If the number of arguments is not 1, or the string is empty, display only
a newline.

Examples:

$>./aff_middle_char "hello" | cat -e
l$
$>./aff_middle_char "abcd" | cat -e
bc$
$>./aff_middle_char "a" | cat -e
a$
$>./aff_middle_char "" | cat -e
$
==========================================================================================