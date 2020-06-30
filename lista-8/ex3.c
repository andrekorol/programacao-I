#include <stdio.h>

int main()
{
    int n, raizesReais = 0, raizesImaginarias = 0;
    float numReal, temp, raiz;

    puts("Entre a quantidade (n) de numeros reais a ser entrada:");
    scanf("%d", &n);
    while (n--)
    {
        puts("Entre um numero real:");
        scanf(" %f", &numReal);
        if (numReal < 0)
        {
            printf("Numero imaginario raiz(%.0f)\n", numReal);
            raizesImaginarias++;
            numReal *= -1; // converte para positivo
        }
        else
            raizesReais++;

        raiz = numReal / 2;
        temp = 0;
        while (raiz != temp)
        {
            temp = raiz;
            raiz = (numReal / temp + temp) / 2;
        }
        printf("raiz(%.0f) = %.0f\n", numReal, raiz);
    }
    printf("Ocorreram %d raizes reais e %d raizes imaginarias\n", raizesReais,
           raizesImaginarias);

    return 0;
}
