#include <stdio.h>

int main()
{
    int numero, soma = 0;

    puts("Entre inteiros, ou entao qualquer valor nao inteiro para terminar seu input:");

    while (scanf("%d", &numero))
    {
        soma += numero;
    }

    printf("Somatorio = %d\n", soma);

    return 0;
}