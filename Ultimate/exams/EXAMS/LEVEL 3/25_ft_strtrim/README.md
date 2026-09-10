==========================================================================================
Assignment name  : ft_strtrim
Expected files   : ft_strtrim.c
Allowed functions: malloc
------------------------------------------------------------------------------------------

Write a function that allocates (with malloc) and returns a copy of s1 with
all leading and trailing whitespace characters (space, tab, newline) removed.

If s1 is NULL or the allocation fails, return NULL.

Your function must be declared as follows:

char	*ft_strtrim(char const *s1);

Examples:

ft_strtrim("  hello  ")          // returns "hello"
ft_strtrim("\t\n  test \n\t")    // returns "test"
ft_strtrim("no trim")            // returns "no trim"
ft_strtrim("   ")                // returns ""
==========================================================================================