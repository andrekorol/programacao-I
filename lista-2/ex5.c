// Andre Rossi Korol - 01810067
// EComp-5UNA

#include <stdio.h>
#include <math.h>

#define NUM_NOTAS 3

int main()
{
    int i;
    float mediaPonderada;
    int somaPesos = 0;
    float somaNotas = 0;
    float notas[NUM_NOTAS];
    int pesos[NUM_NOTAS] = {2, 3, 5};

    for (i = 0; i < NUM_NOTAS; i++)
    {
        printf("Entre a %da nota:\n", i + 1);
        scanf("%f", &notas[i]);
    }

    for (i = 0; i < NUM_NOTAS; i++)
    {
        somaPesos += pesos[i];
        somaNotas += notas[i] * pesos[i];
    }

    mediaPonderada = roundf((somaNotas / somaPesos) * 10) / 10;
    printf("Media ponderada do aluno: %.1f\n", mediaPonderada);

    return 0;
}
