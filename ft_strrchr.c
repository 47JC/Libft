#include <stdio.h>
#include "libft.h"

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strrstr(char *str, int c)
{
    int     count;
    int     i;

    i = 0;
    count = ft_strlen(str) - 1;
    while (count > i && str[count] != c)
        count--;
    if (str[count] != c && count == i)
        return (0);
    return (str + count);
}
/*
int main()
{
    printf("-->%s\n", ft_strrstr("joaocaouto", 'a'));
}*/