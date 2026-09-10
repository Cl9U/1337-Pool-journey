==========================================================================================
Assignment name  : ft_eval_expr
Expected files   : ft_eval_expr.c
Allowed functions: write
------------------------------------------------------------------------------------------

Write a program that takes a mathematical expression as a string and
evaluates it. The expression contains only non-negative integers and the
operators +, -, *, / (integer division).

You must respect operator precedence: * and / before + and -.
There are no parentheses, no spaces, and the expression is always valid.

If the number of arguments is not 1, display only a newline.

Examples:

$>./ft_eval_expr "3+4*2" | cat -e
11$
$>./ft_eval_expr "10-2*3+1" | cat -e
5$
$>./ft_eval_expr "100/10/2" | cat -e
5$
$>./ft_eval_expr "42" | cat -e
42$
==========================================================================================