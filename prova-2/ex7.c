#include <stdio.h>

int fi(char *str, char *str2)
{
    int i = 0;

    while (*str)
    {
        if (*str == *str2)
        {
            i++;
            break;
        }

        str++;
    }
    return i;
}

int main()
{
    int x = fi("PROVA DE PROGRAMACAO - I", "v");

    printf("%d\n", x);

    return 0;
}
