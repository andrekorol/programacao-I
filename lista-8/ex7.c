#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2;

    puts("Entre o coeficiente a:");
    scanf("%f", &a);
    puts("Entre o coeficiente b:");
    scanf(" %f", &b);
    puts("Entre o coeficiente c:");
    scanf(" %f", &c);

    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("As raizes sao: x1 = %.0f e x2 = %.0f\n", x1, x2);

    return 0;
}
