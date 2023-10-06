#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str;
    size_t	i;

    i = 0;
    str = (unsigned char *) s;
    while (i < n)
        str[i++] = c;
    return (s); 
}

void    *ft_calloc(int nmemb, int size)
{
    void    *p;

    p = (void*)malloc(nmemb * size);
    if(!p)
        return (0);
    ft_memset(p, '0', nmemb);
    return (p);    
}
/*
int main()
{
    char *pointer = (char *)ft_calloc( 4, sizeof(char));
    write(1, "--->", 4);
    write(1, pointer, 4);
}*/