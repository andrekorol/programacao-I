# Lista de Exercícios – 2

## *Disciplina Linguagem de Programação - I*

### André Rossi Korol – 01810067

#### 1)
```C
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
```

<div style="page-break-after: always;"></div>

#### 2)
<p align="center">
   <img src="/home/andre/src/repos/github/programacao-I/lista-2/ex2-flowchart.png">
</p>

```C
#include <stdio.h>

int main()
{
    int a, b, soma;

    puts("Entre o primeiro numero:");
    scanf("%d", &a);
    puts("Entre o segundo numero:");
    scanf("%d", &b);

    soma = a + b;
    printf("Resultado da soma: %d + %d = %d\n", a, b, soma);

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 3)
O resultado sera o maior valor dado para um ```unsigned int``` em uma determinada maquina/arquitetura, uma vez que quando é subtraido 6 de 5 utilizando variáveis de tipo ```unsigned``` tanto para o minuendo e o subtraendo, quanto para a diferença, ocorre um underflow.

#### 4)
```C
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
```

<div style="page-break-after: always;"></div>

#### 5)
```C
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
```

#### 6)
```C
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
```

<div style="page-break-after: always;"></div>

#### 7)
```C
#include <stdio.h>

typedef long long ll;

int main()
{
    ll n, f;
    scanf("%lld", &n);
    f = 1;
    while (n > 1)
    {
        f *= n;
        n--;
    }
    printf("%lld\n", f);

    return 0;
}
```

#### 8)
```C
#include <stdio.h>

int main()
{
    float cotacaoDolar, quantidadeDolar, valorReal;

    puts("Entre o valor da cotacao do dolar (em R$):");
    scanf("%f", &cotacaoDolar);
    puts("Entre a quantidade de dolares disponiveis:");
    scanf("%f", &quantidadeDolar);

    valorReal = cotacaoDolar * quantidadeDolar;
    printf("Conversao: US$%.2f = R$%.2f\n", quantidadeDolar, valorReal);

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 9)
```C
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
```

#### 10)
```C
#include <stdio.h>

int main()
{
    float medida;
    puts("Entre o valor da medida em metros:");
    scanf("%f", &medida);
    printf("%.2fm = %.2fmm\n", medida, medida * 1000);

    return 0;
}
```
