==========================================================================================
Assignment name  : ft_multiply_str
Expected files   : ft_multiply_str.c
Allowed functions: write
------------------------------------------------------------------------------------------

Write a program that takes two string representations of non-negative integers
and displays their product, followed by a newline.

The numbers can be very large (bigger than what fits in a long), so you must
perform the multiplication digit by digit, like you would on paper.

If the number of arguments is not 2, display only a newline.

Examples:

$>./ft_multiply_str "123" "456" | cat -e
56088$
$>./ft_multiply_str "0" "12345" | cat -e
0$
$>./ft_multiply_str "99" "99" | cat -e
9801$
$>./ft_multiply_str | cat -e
$
==========================================================================================