#include <stdio.h>
#include <string.h>
#include "libft.h"

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
size_t     ft_strlcpy(char *dest, char *src, size_t size)
{
    size_t     i;
    size_t     len;

    len = ft_strlen(src);
    if (size == 0)
	    return (len);
    i = 0;
    while (src && src[i] && i < size - 1)
    {
        dest[i] = src[i];
        i++; 
    }
    dest[i] = '\0';
    return ((size_t)len);
}
/*
int main()
{
	char *str = "joaocouto3333333";     
	char copia[10] = "";

	ft_strlcpy(copia, str, 0);
	printf("--->%lu, %s\n", ft_strlcpy(copia, str, 10), copia);
//	printf("--->%lu, %s\n", strlcpy(copia, str, 10), copia);
}*/
