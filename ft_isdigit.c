//#include <stdio.h>
#include "libft.h"
int     ft_isdigit(unsigned char c)
{
    if (c > 47 && c < 58)
        return (1);
    return (0);
}
/*
int main()
{
    int i = ft_isdigit('Z');
    printf("%d", i);
}*/