#include <stdio.h>

int main()
{
    int n, i, x, maior, menor;

    puts("Entre o valor (n) de numeros a serem entrados:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Entre o %d° numero:\n", i + 1);
        scanf("%d", &x);

        if (i == 0)
        {
            maior = x;
            menor = x;
        }
        else
        {
            if (x > maior)
                maior = x;
            if (x < menor)
                menor = x;
        }
    }

    printf("Maior = %d\nMenor = %d\n", maior, menor);

    return 0;
}