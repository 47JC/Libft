//#include <stdio.h>
//#include <ctype.h>
int     ft_toupper(int c)
{
    if(c > 96 && c < 123)
        c -= 32;
    return c;
}
/*
int main()
{
    int i = 0;

    while (i <= 127)
    {
        printf("O caracter --> %c, na minha função --> %c, na original --> %c.\n", i, ft_toupper(i), toupper(i));
        i++;
    }
}
*/