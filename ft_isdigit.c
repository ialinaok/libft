#include <stdio.h>

int ft_isdigit(int n)
{
    if (n >= 0 && n <= 9)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}

int main(void)
{
    if(ft_isdigit('p') == 0)
    {
        printf("This is not a digit \n");
    }
    else
    {
        printf("This is a digit \n");
    }
    return (0);
}
