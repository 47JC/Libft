#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int     ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(const char *s1)
{
    char *nova;
    int i;
    int n;

    n = -1;
    i = ft_strlen(s1);
    nova = (char *)malloc(sizeof(char) * i);
    if (!nova)
        return(0);
    while (s1[n])
    {
        nova[n] = s1[n];
        n++;
    }
    nova[n] = '\0';
    return (nova);
}

// int main()
// {
//     char *nome = "joaocouto";
//     char *copia = ft_strdup(nome);

//     write(1, copia, 9);
// }
