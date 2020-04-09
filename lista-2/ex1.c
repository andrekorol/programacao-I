// Andre Rossi Korol - 01810067
// EComp-5UNA

#include <stdio.h>

#define PI 3.141593

int main()
{
    float raio, comprimento;
    puts("Entre um valor para o raio:");
    scanf("%f", &raio);
    comprimento = 2 * PI * raio;
    printf("O comprimento da circunferencia eh igual a %f\n", comprimento);

    return 0;
}
