//#include <stdio.h>
#include "libft.h"
int     ft_isalnum(int c)
{
    if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
        return (1);
    return (0);
}
/*
int main()
{
    int i = ft_isalnum('Z');
    printf("%d", i);
}*/