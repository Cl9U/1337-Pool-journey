==========================================================================================
Assignment name  : ft_strtok
Expected files   : ft_strtok.c
Allowed functions: (none)
------------------------------------------------------------------------------------------

Reproduce the behavior of the function strtok (man strtok).

On the first call, str should point to the string to tokenize. On subsequent
calls, str should be NULL.

The function returns a pointer to the next token, or NULL if there are no
more tokens.

Your function must be declared as follows:

char	*ft_strtok(char *str, char *delim);

Note: You may use a static variable to keep track of position between calls.
==========================================================================================