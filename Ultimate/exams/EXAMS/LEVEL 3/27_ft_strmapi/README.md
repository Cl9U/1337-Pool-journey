==========================================================================================
Assignment name  : ft_strmapi
Expected files   : ft_strmapi.c
Allowed functions: malloc
------------------------------------------------------------------------------------------

Write a function that applies the function f to each character of the string s,
passing its index as first argument, to create a new string (with malloc)
resulting from successive applications of f.

If s is NULL or the allocation fails, return NULL.

Your function must be declared as follows:

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

Example:

char to_upper(unsigned int i, char c)
{
    (void)i;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}

ft_strmapi("hello", to_upper)  // returns "HELLO"
==========================================================================================