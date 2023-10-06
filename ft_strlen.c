//#include <stdio.h>
#include "libft.h"

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
/*
int main()
{
    printf("O numero de chars é %d.\n", ft_strlen("12345678"));
}*/