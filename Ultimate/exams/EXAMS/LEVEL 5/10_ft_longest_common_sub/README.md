==========================================================================================
Assignment name  : ft_longest_common_sub
Expected files   : ft_longest_common_sub.c
Allowed functions: write, malloc, free
------------------------------------------------------------------------------------------

Write a program that takes two strings and displays the longest common
substring, followed by a newline.

If there are multiple longest common substrings of the same length, display
the one that appears first in the first string.

If the number of arguments is not 2, display only a newline.

Examples:

$>./ft_longest_common_sub "ABABC" "BABCBA" | cat -e
BABC$
$>./ft_longest_common_sub "abcxyz" "xyzabc" | cat -e
abc$
$>./ft_longest_common_sub "hello" "world" | cat -e
o$
$>./ft_longest_common_sub "" "test" | cat -e
$
==========================================================================================