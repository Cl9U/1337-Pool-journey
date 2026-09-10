==========================================================================================
Assignment name  : ft_is_negative
Expected files   : ft_is_negative.c
Allowed functions: write
------------------------------------------------------------------------------------------

Write a function that displays 'N' if the integer passed as parameter is
negative, or 'P' if it is positive or zero, followed by a newline.

Your function must be declared as follows:

void	ft_is_negative(int n);

Example:

int main(void)
{
    ft_is_negative(-5);   // displays "N\n"
    ft_is_negative(0);    // displays "P\n"
    ft_is_negative(42);   // displays "P\n"
    return (0);
}
==========================================================================================