#include <stdio.h>

int main()
{
    int primeiroValor, segundoValor;

    puts("Entre o primeiro valor:");
    scanf("%d", &primeiroValor);
    puts("Entre o segundo valor:");
    scanf("%d", &segundoValor);

    for (int i = 1; i <= primeiroValor; i++)
        for (int j = 1; j <= segundoValor; j++)
            printf("%d,%d\n", i, j);

    return 0;
}