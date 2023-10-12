#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char    *ft_itoa(int n)
{
    char *new;
    int count;
    long number;
    long n2;
    int count2;
    int menos;

    n2 = n;
    if (n2 == 0)
    {
        new = (char *)malloc(sizeof(char) * 2);
        new [0] = 48;
        new[1] = '\0';
        return (new);
    }
    number = n;
    count = 0;
    if (n2 < 0)
    {
            menos = 1;
            count++;
            number *= -1;
    }
    while (n2)
    {
        n2 /= 10;
        count++;
    }
    count2 = count;
    new = (char *)malloc(sizeof(char) * count + 1);
    if (!new)
        return (0);
    while (number)
    {
        new[--count] = (number % 10) + 48;
        number /= 10; 
    }
    if (menos)
        new[--count] = '-';
    new[count2] = '\0';
    return (new);
}
/*
int main()
{
    char *num = ft_itoa(0);

    write(1, num, 1   );
}*/