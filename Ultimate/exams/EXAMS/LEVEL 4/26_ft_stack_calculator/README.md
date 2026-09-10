==========================================================================================
Assignment name  : ft_stack_calculator
Expected files   : ft_stack_calculator.c
Allowed functions: write, malloc, free
------------------------------------------------------------------------------------------

Write a program that takes arguments representing a Reverse Polish Notation
(RPN) expression and displays the result, followed by a newline.

Each argument is either a non-negative integer or one of: + - * /
Division is integer division. Division by zero displays "Error".
If the expression is invalid (too many/few operands), display "Error".
If there are no arguments, display nothing.

Examples:

$>./ft_stack_calculator "3" "4" "+" | cat -e
7$
$>./ft_stack_calculator "5" "3" "2" "*" "+" | cat -e
11$
$>./ft_stack_calculator "8" "2" "/" | cat -e
4$
$>./ft_stack_calculator "1" "0" "/" | cat -e
Error$
$>./ft_stack_calculator "1" "2" "+" "3" | cat -e
Error$
==========================================================================================