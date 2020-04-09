// Andre Rossi Korol - 01810067
// EComp-5UNA

#include <stdio.h>

int main()
{
    float medida;
    puts("Entre o valor da medida em metros:");
    scanf("%f", &medida);
    printf("%.2fm = %.2fmm\n", medida, medida * 1000);

    return 0;
}
