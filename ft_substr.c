#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int     len1(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int     len_s;
    unsigned int     n;
    unsigned int     i;
    char *sub;

    n =  0;
    i = start;
    len_s = len1((char*)s);
    if ((len_s - start) > len)
        sub = (char *)malloc(sizeof(char) * len + 1);
    else
        sub = (char *)malloc(sizeof(char) * (len - start + 1));
    if (!sub)
        return (NULL);
    while (s[start] && len--)
        sub[n++] = s[start++];
    sub[n] = '\0';
    return (sub);
}
/*
int main(int argc, char **argv)
{
    if (argc)
    {
        printf("|%s|\n", ft_substr(argv[1], 5, 10));
    }
}*/