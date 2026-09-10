==========================================================================================
Assignment name  : ft_str_compress
Expected files   : ft_str_compress.c
Allowed functions: malloc
------------------------------------------------------------------------------------------

Run-length-encodes str: consecutive repeated characters become char + count
(only if count > 1, otherwise just the char). Must malloc a new string sized
exactly to the result.

Example: "aaabccccd" -> "a3bc4d"

Your function must be declared as follows:

char	*ft_str_compress(char *str);
==========================================================================================