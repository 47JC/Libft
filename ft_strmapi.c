#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static  int     len(char const *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

static char funcao(unsigned int n, char c)
{
    (void) n;
    return (c);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int lens;
    unsigned int i;
    char *str;

    i = 0;
    lens = len(s);
    str = (char*)malloc(sizeof(char) * (lens + 1));
    if (!str)
        return (0);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);    
}
/*
int main()
{
    char *nome = "joaocouto";

    printf("|%s|\n",  ft_strmapi(nome, funcao));
}*/