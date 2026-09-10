#include <stdio.h>

void count_up(void)
{
    static int n = 0;

    if (n > 10)
        return ;
    printf("%d\n", n);
    n++;
    count_up();
}

int main(void)
{
    count_up();
    return (0);
}