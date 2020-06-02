#include <stdio.h>
#include <stdlib.h>

void handleFirstIteration(int *x, int *maior, int *menor)
{
    *maior = *x;
    *menor = *x;
}

void handleMaiorMenor(int *x, int *maior, int *menor)
{
    *maior = (*x > *maior) ? *x : *maior;
    *menor = (*x < *menor) ? *x : *menor;
}

int main()
{
    int n, i;
    int *x = (int *)malloc(sizeof(int));
    int *maior = (int *)malloc(sizeof(int));
    int *menor = (int *)malloc(sizeof(int));

    puts("Entre o valor (n) de numeros a serem entrados:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Entre o %d° numero:\n", i + 1);
        scanf("%d", x);
        (i == 0) ? handleFirstIteration(x, maior, menor) : handleMaiorMenor(x, maior, menor);
    }

    printf("Maior = %d\nMenor = %d\n", *maior, *menor);

    free(x);
    free(maior);
    free(menor);

    return 0;
}