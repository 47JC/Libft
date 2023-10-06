//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"
int     ft_isprint(int c)
{
    if (c > 31 && c < 127)
        return (1);
    return (0);
}
/*
int main()
{
    char c;

    c = 32;
    if (ft_isprint(c))
        printf("verdade");
    else
        printf("mentira");
}*/
