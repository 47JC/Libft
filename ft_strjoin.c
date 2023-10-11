#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int     contar(char const *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_strjoin(char const *s1, char const *s2)
{
    char *new;
    int len_s1;
    int len_s2;
    int i;
    int n;

    len_s1 = contar(s1);
    len_s2 = contar(s2);
    i = 0;
    n = 0;
    new = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
    if (!new)
        return (NULL);
    while (s1[i] && s1)
    {
        new[i] = s1[i];
        i++;
    }
    while (s2[n] && s2)
        new[i++] = s2[n++];
    new[i] = '\0';
    return (new);
}
/*
int main(int argc, char **argv)
{
    if (argc == 3)
    {
            printf("%s\n", ft_strjoin(argv[1], argv[2]));
    }
}*/