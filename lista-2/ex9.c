// Andre Rossi Korol - 01810067
// EComp-5UNA

#include <stdio.h>
#include <math.h>

int main()
{
    float valor, taxaMensal, juroMensal;
    unsigned short meses;

    puts("Entre o valor do emprestimo (em R$):");
    scanf("%f", &valor);
    puts("Entre a taxa mensal dos juros (em %)");
    scanf("%f", &taxaMensal);
    puts("Entre o prazo do emprestimo (em meses):");
    scanf("%hu", &meses);

    taxaMensal /= 100; // converte de porcentagem para decimal
    juroMensal = (valor / meses) * taxaMensal;

    // arredonda para duas casas decimais
    juroMensal = roundf(juroMensal * 100) / 100;

    printf("O juro mensal nessa operacao sera de R$%.2f\n", juroMensal);

    return 0;
}
