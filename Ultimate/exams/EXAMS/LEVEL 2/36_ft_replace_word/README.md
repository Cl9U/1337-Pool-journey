==========================================================================================
Assignment name  : ft_replace_word
Expected files   : ft_replace_word.c
Allowed functions: write
------------------------------------------------------------------------------------------

Write a program that takes 3 arguments: a string, a word to find, and a
replacement word. Display the string with all occurrences of the word
replaced, followed by a newline.

Only replace whole words (delimited by spaces or start/end of string).
If the number of arguments is not 3, display only a newline.

Examples:

$>./ft_replace_word "the cat on the mat" "the" "a" | cat -e
a cat on a mat$
$>./ft_replace_word "hello world" "world" "42" | cat -e
hello 42$
$>./ft_replace_word "aaa aa a" "a" "bb" | cat -e
aaa aa bb$
$>./ft_replace_word | cat -e
$
==========================================================================================