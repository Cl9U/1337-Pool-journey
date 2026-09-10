==========================================================================================
Assignment name  : ft_substr
Expected files   : ft_substr.c
Allowed functions: malloc
------------------------------------------------------------------------------------------

Write a function that allocates (with malloc) and returns a substring from
the string s. The substring begins at index start and is of maximum size len.

If start is beyond the string length, return an allocated empty string.
If s is NULL or the allocation fails, return NULL.

Your function must be declared as follows:

char	*ft_substr(char const *s, unsigned int start, size_t len);

Examples:

ft_substr("Hello World", 6, 5)    // returns "World"
ft_substr("Hello", 0, 3)          // returns "Hel"
ft_substr("Hello", 10, 5)         // returns ""
==========================================================================================