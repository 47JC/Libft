//#include <ctype.h>
//#include <stdio.h>
#include "libft.h"
int     ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}
/*
int main()
{
    char c = 0x1f;

    if (ft_isascii(0x1f))
        printf("O carater é %c.\n", c);
    else
        printf("o carater não pertence à ascii.");
}*/
