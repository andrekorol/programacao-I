// Andre Rossi Korol - 01810067
// EComp-5UNA

#include <stdio.h>

int main()
{
    float distancia, combustivelGasto, consumoMedio;

    puts("Entre a distancia total percorrida (em km):");
    scanf("%f", &distancia);
    puts("Entre o total gasto de combustivel (em L):");
    scanf("%f", &combustivelGasto);

    consumoMedio = distancia / combustivelGasto;
    printf("O consumo medio foi de %.2f km/l\n", consumoMedio);

    return 0;
}
