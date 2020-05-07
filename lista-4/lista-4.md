# Lista de Exercícios – 4

## _Disciplina Linguagem de Programação - I_

### André Rossi Korol – 01810067

#### 1)

```C
#include <stdio.h>

int main()
{
    float preco;

    puts("Entre o preco do produto vendido:");
    scanf("%f", &preco);

    if (preco > 150 && preco <= 200)
    {
        puts("Acrescimo de 5% no salario");
    }
    else if (preco > 200 && preco <= 400)
    {
        puts("Acrescimo de 10% no salario");
    }
    else if (preco > 400)
    {
        puts("Acrescimo de 15% no salario");
    }
    else
    {
        puts("Sem acrescimo no salario");
    }

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 2)

```C
#include <stdio.h>

int main()
{
    unsigned int lados[3];
    for (int i = 0; i < 3; i++)
    {
        puts("Entre a medida de um dos lados do triangulo:");
        scanf("%u", &lados[i]);
    }
    unsigned int ladoA = lados[0], ladoB = lados[1], ladoC = lados[2];

    if (ladoA + ladoB <= ladoC || ladoA + ladoC <= ladoB || ladoB + ladoC <= ladoA)
    {
        puts("As medidas dadas nao podem representar os lados de um triangulo");
    }
    else
    {
        if (!((ladoA ^ ladoB) | (ladoB ^ ladoC)))
        {
            puts("As medidas dadas formam um triangulo equilatero");
        }
        else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC)
        {
            puts("As medidas dadas formam um triangulo isosceles");
        }
        else
        {
            puts("As medidas dadas formam um triangulo escaleno");
        }
    }

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 3)

```C
#include <stdio.h>

int main()
{
    int k, numMeio;

    scanf("%d", &k);
    numMeio = k / 3;

    printf("%d, %d e %d\n", numMeio - 1, numMeio, numMeio + 1);

    return 0;
}
```

#### 4)

```C
#include <stdio.h>

int main()
{
    unsigned int idadePessoa, idadeFilho, anosTranscorridos;

    puts("Entre a idade da pessoa:");
    scanf("%u", &idadePessoa);
    puts("Entre a idade do filho");
    scanf("%u", &idadeFilho);

    anosTranscorridos = (idadePessoa - 3 * idadeFilho) / 2;

    printf("Dentro de %u anos a pessoa tera %u anos e o filho, %u\n",
           anosTranscorridos, idadePessoa + anosTranscorridos,
           idadeFilho + anosTranscorridos);

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 5)

```C
#include <stdio.h>

int main()
{
    int n;

    puts("Entre um numero:");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        puts("1 ler romance");
        break;

    case 2:
        puts("2 fazer hamburgueres");
        break;

    case 3:
        puts("3 jogar xadrez");
        break;

    case 4:
        puts("4 fazer palavras cruzadas");
        break;

    case 5:
        puts("5 lavar roupa");
        break;

    case 6:
        puts("6 regar as plantas");
        break;

    case 7:
        puts("3 e 7 jogam xadrez");
        break;

    default:
        puts("So haviam 7 irmas");
        break;
    }

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 6)

```C
#include <stdio.h>

int main()
{
    double rendaAnual, valorImposto;

    puts("Entre a renda anual do contribuinte:");
    scanf("%lf", &rendaAnual);

    if (rendaAnual <= 10000)
    {
        valorImposto = 0;
    }
    else if (rendaAnual > 10000 && rendaAnual <= 25000)
    {
        valorImposto = rendaAnual * 0.1 - 1000;
    }
    else
    {
        valorImposto = rendaAnual * 0.25 - 4750;
    }

    printf("O valor do imposto sera de R$ %.2f\n", valorImposto);

    return 0;
}
```
