#include <stdio.h>
#include <stdlib.h>

// funcao para comparar dois floats (a > b)
static int compareFloat(const void *a, const void *b)
{
    return (*(float *)a > *(float *)b) - (*(float *)a < *(float *)b);
}

int main()
{
    float primeiroNumero, segundoNumero, terceiroNumero, quartoNumero;
    float amplitudeMedia;

    puts("Entre o primeiro numero:");
    scanf("%f", &primeiroNumero);
    puts("Entre o segundo numero:");
    scanf("%f", &segundoNumero);
    puts("Entre o terceiro numero:");
    scanf("%f", &terceiroNumero);
    puts("Entre o quarto numero:");
    scanf("%f", &quartoNumero);

    float numeros[4] = {primeiroNumero, segundoNumero, terceiroNumero, quartoNumero};
    // ordena o array de floats
    qsort(numeros, 4, sizeof(float), compareFloat);
    amplitudeMedia = (numeros[3] + numeros[0]) / 2;
    printf("Amplitude media = %.2f\n", amplitudeMedia);

    return 0;
}