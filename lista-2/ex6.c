// Andre Rossi Korol - 01810067
// EComp-5UNA

#include <stdio.h>
#include <math.h>

int main()
{
    float tempCelsius, tempFahr;
    puts("Entre a temperatura em graus Celsius:");
    scanf("%f", &tempCelsius);
    tempFahr = (9 * tempCelsius + 160) / 5;
    tempFahr = roundf(tempFahr * 10) / 10; // arredonda para uma casa decimal
    printf("Temperatura em graus Fahrenheit: %.1f\n", tempFahr);

    return 0;
}
