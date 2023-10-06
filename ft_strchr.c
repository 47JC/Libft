#include <stdio.h>
#include "libft.h"

char    *ft_strchar(char *str, int c)
{
    int     i;

    i = 0;
    
    while (str[i] != '\0' && str[i] != c && str)
        i++;
    if (i == 0)
        return (NULL);
    return (str + i);
}
//temos que retornar null caso nao encontre o caracter.. mas o null tb pode ser procurado ??? está bem assim?
// int main()
// {
//     printf("-->%s", ft_strchar("joao couto", 'c'));
// }
//dá o aviso do tipo de data mas supostamente deve ser prototipada desta maneira (const char)
