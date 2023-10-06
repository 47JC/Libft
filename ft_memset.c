#include <stdio.h>
#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str;
    size_t	i;

    i = 0;
    str = (unsigned char *) s;
    while (i < n)
        str[i++] = c;
    return (s); 
}
/*
int     main()
{
    char name[10] = "joaocouto";
    
    ft_memset(name + 1, 'x', 3);
    printf("%s\n", name);
    
}*/
