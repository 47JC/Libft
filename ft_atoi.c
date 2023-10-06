#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
int     ft_atoi(const char *str)
{
    int     menos;
    int     i;
    int     count;
    int     nb;

    nb = 0;
    i = 0;
    count = 0;
    while ((str[i] > 8 && str[i] < 14) || str[i] == ' ')
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            menos = -1;
        count++;
        i++;
    }
    if (count > 1)
        return (0);
    while (str[i] > 47 && str[i] < 58)
    {
        nb *= 10;
        nb += str[i] - 48;
        i++;            
    }
    if (menos == -1)
        return (nb * menos);
    return (nb);   
}
/*
int main()
{
    printf(" '  123' minha função --> %d, original --> %d.\n", ft_atoi("   123"), atoi("   123"));
    printf(" '  -123' minha função --> %d, original --> %d.\n", ft_atoi("   -123"), atoi("   -123"));
    printf(" '++123' minha função --> %d, original --> %d.\n", ft_atoi("   ++123"), atoi("   ++123"));
    printf(" '-----123' minha função --> %d, original --> %d.\n", ft_atoi("   -----123"), atoi("   -----123"));
    printf(" '  -233123' minha função --> %d, original --> %d.\n", ft_atoi("   -233123"), atoi("   -233123"));
    printf(" '' minha função --> %d, original --> %d.\n", ft_atoi(""), atoi(""));
}*/