#include <stdio.h>

int main()
{
    float valor1, valor2, resultado;
    char operador;

    puts("Entre o primeiro valor:");
    scanf("%f", &valor1);
    puts("Entre um operador(+,-,*,/):");
    getchar(); // Consome o '\n' do input anterior
    operador = getchar();
    puts("Entre o segundo valor:");
    scanf("%f", &valor2);

    switch (operador)
    {
    case '+':
        resultado = valor1 + valor2;
        break;

    case '-':
        resultado = valor1 - valor2;
        break;

    case '*':
        resultado = valor1 * valor2;
        break;

    case '/':
        resultado = valor1 / valor2;
        break;

    default:
        printf("Operador '%c' invalido.\n", operador);
        return -1;
    }

    printf("%.2f %c %.2f = %.2f\n", valor1, operador, valor2, resultado);

    return 0;
}