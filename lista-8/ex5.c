#include <stdio.h>
#include <math.h>

int main()
{
    float perimetroTotal, area, lado;
    puts("Entre a area do galinheiro (em metros quadrados):");
    scanf("%f", &area);
    lado = sqrt(area);
    perimetroTotal = lado * 4;
    printf("Serao necessarios %.0f metros de tela para cercar o galinheiro\n",
           perimetroTotal);

    return 0;
}
