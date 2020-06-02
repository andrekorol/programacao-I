#include <stdio.h>

int main()
{
    int n, x, pares = 0;
    puts("Entre a quantidade de numeros a ser entrada:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Entre o %d° numero:\n", i + 1);
        scanf("%d", &x);
        if (!(x & 1))
            pares++;
    }

    printf("Quantidade de numeros pares: %d\n", pares);

    return 0;
}