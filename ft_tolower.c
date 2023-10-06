//#include <stdio.h>
//#include <ctype.h>

int     ft_tolower(int c)
{
    if(c > 64 && c < 91)
        c += 32;
    return c;
}
/*
int main()
{
    int i = 0;

    while (i <= 127)
    {
        printf("O caracter --> %c, na minha função --> %c, na original --> %c.\n", i, ft_tolower(i), tolower(i));
        i++;
    }
}*/