#include <stdio.h>
#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (s1 && s2 && s1[i] && s2[i] && s1[i] == s2[i] && i < n)
        i++;
    return (s1[i] - s2[i]);
}
/*
int main(int argc, char **argv)
{
    (void)argc;
    printf("%d\n", ft_strncmp(argv[1], argv[2], 10));
}
*/