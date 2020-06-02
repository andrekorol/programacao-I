#include <stdio.h>

int main()
{
    unsigned int x, y, i, resultado = 1;

    puts("Entre o valor de x:");
    scanf("%u", &x);
    puts("Entre o valor de y:");
    scanf("%u", &y);

    for (i = 0; i < y; i++)
        resultado *= x;

    printf("%u ^ %u = %u\n", x, y, resultado);

    return 0;
}