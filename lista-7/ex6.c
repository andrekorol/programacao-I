#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int m, n, i;
    float c, a = 0, b = 0;
    float *array = (float *)malloc(sizeof(float));

    puts("Entre um numero real para n:");
    scanf("%u", &n);
    m = 0;
    printf("Entre um  numero real, menor que %u, para m:\n", n);
    scanf("%u", &m);
    if (m >= n)
    {
        printf("%d nao eh menor que %d!\n", m, n);
        return -1;
    }

    puts("Entre um numero real para a constante c:");
    scanf("%f", &c);

    for (i = 1; i <= n - m + 1; i++)
    {
        printf("Entre o %d° numero do vetor a:\n", i);
        scanf("%f", (array + i - 1));
        array = (float *)realloc(array, sizeof(float) * i + 1);
    }

    for (i = 0; i < n - m + 1; i++)
    {
        a += c * (*(array + i));
        b += *(array + i);
    }
    b *= c;

    printf("Σ(cai) = %.2f\ncΣai = %.2f\n", a, b);

    free(array);

    return 0;
}