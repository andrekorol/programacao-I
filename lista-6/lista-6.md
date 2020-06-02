<style>
    table, th, td {
        border: 5px solid dodgerblue;
        border-style: ridge;
        text-align: center;
    }
    table {
        width: 85%;
    }
    th {
        background-color: paleturquoise;
    }
    td {
        background-color: palegreen;
    }
</style>

# Lista de Exercícios – 6

## _Disciplina Linguagem de Programação - I_

### André Rossi Korol – 01810067

#### 1)

```C
#include <stdio.h>

int main()
{
    puts("Dec | Char");
    puts("----------");

    for (int i = 33; i <= 255; i++)
    {
        printf("%3d | %3c\n", i, i);
    }

    return 0;
}
```

#### 2)

O programa mostra o alfabeto em letras minusculas.

<div style="page-break-after: always;"></div>

#### 3)

```C
#include <stdio.h>

int main()
{
    char primeiro, segundo;

    puts("Entre o primeiro caractere: ");
    scanf(" %c", &primeiro);
    puts("Entre o segundo caractere: ");
    scanf(" %c", &segundo);

    if (primeiro < segundo)
    {
        printf("Na tabela ASCII, %c vem antes de %c\n", primeiro, segundo);
    }
    else if (primeiro > segundo)
    {
        printf("Na tabela ASCII, %c vem depois de %c\n", primeiro, segundo);
    }
    else
    {
        printf("%c eh igual a %c\n", primeiro, segundo);
    }

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 4)

```C
#include <stdio.h>

int main()
{
    int numero, soma = 0;

    puts("Entre inteiros, ou entao qualquer valor nao inteiro para terminar seu input:");

    while (scanf("%d", &numero))
    {
        soma += numero;
    }

    printf("Somatorio = %d\n", soma);

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 5)

```C
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int n;

    puts("Digite o numero: ");
    scanf("%u", &n);

    puts("Os primos sao:");

    // Printa a quantidade de 2s que dividem n
    while (n % 2 == 0)
    {
        printf("%d\n", 2);
        n /= 2;
    }

    // n deve ser impar neste ponto, entao podemos pular um
    // elemento (i.e., podemos fazer com que i += 2 no loop)
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        // Enquanto i divide n, printa i e divide n por i
        while (n % i == 0)
        {
            printf("%d\n", i);
            n /= i;
        }
    }

    // Condicao para os casos em que n eh primo e maior que 2
    if (n > 2)
        printf("%d\n", n);

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 6)

```C
#include <stdio.h>

int main()
{
    unsigned int x, y, i, resultado = 1;

    puts("Entre o valor de x:");
    scanf("%u", &x);
    puts("Entre o valor de y:");
    scanf("%u", &y);

    for (i = 0; i < y; i++)
        resultado *= x;

    printf("%u ^ %u = %u\n", x, y, resultado);

    return 0;
}
```

#### 7)

```C
#include <stdio.h>

int main()
{
    puts("Dec | Hx | Char");
    puts("---------------");
    for (int i = 0; i <= 127; i++)
        printf("%3d | %2x | %c\n", i, i, i);

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 8)

```C
#include <stdio.h>

int main()
{
    int n, x, pares = 0;
    puts("Entre a quantidade de numeros a ser entrada:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Entre o %d° numero:\n", i + 1);
        scanf("%d", &x);
        if (!(x & 1))
            pares++;
    }

    printf("Quantidade de numeros pares: %d\n", pares);

    return 0;
}
```

Algumas das razoes para nao ter usado a expressao `continue`:  
<a href="https://eslint.org/docs/rules/no-continue">ESLint no-continue</a>  
<a href="https://stackoverflow.com/questions/1133408/continue-in-nested-while-loops"> Continue in nested while loops</a>  
<a href="https://stackoverflow.com/questions/4913981/why-is-continue-inside-a-loop-a-bad-idea">Why is continue inside a loop a bad idea?</a>

<div style="page-break-after: always;"></div>

#### 9)

```C
#include <stdio.h>

int main()
{
    int n, i, x, maior, menor;

    puts("Entre o valor (n) de numeros a serem entrados:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Entre o %d° numero:\n", i + 1);
        scanf("%d", &x);

        if (i == 0)
        {
            maior = x;
            menor = x;
        }
        else
        {
            if (x > maior)
                maior = x;
            if (x < menor)
                menor = x;
        }
    }

    printf("Maior = %d\nMenor = %d\n", maior, menor);

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 10)

```C
#include <stdio.h>
#include <stdlib.h>

void handleFirstIteration(int *x, int *maior, int *menor)
{
    *maior = *x;
    *menor = *x;
}

void handleMaiorMenor(int *x, int *maior, int *menor)
{
    *maior = (*x > *maior) ? *x : *maior;
    *menor = (*x < *menor) ? *x : *menor;
}

int main()
{
    int n, i;
    int *x = (int *)malloc(sizeof(int));
    int *maior = (int *)malloc(sizeof(int));
    int *menor = (int *)malloc(sizeof(int));

    puts("Entre o valor (n) de numeros a serem entrados:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Entre o %d° numero:\n", i + 1);
        scanf("%d", x);
        (i == 0) ? handleFirstIteration(x, maior, menor) : handleMaiorMenor(x, maior, menor);
    }

    printf("Maior = %d\nMenor = %d\n", *maior, *menor);

    free(x);
    free(maior);
    free(menor);

    return 0;
}
```

<div style="page-break-after: always;"></div>

#### 11)

#### a)

<div align="center">
    <table>
        <tr>
            <th>na</th>
            <th>ca</th>
            <th>i</th>
            <th>s</th>
            <th>c</th>
            <th>n</th>
            <th>m</th>
        </tr>
        <tr>
            <td>3</td>
            <td>2</td>
            <td>1</td>
            <td>0</td>
            <td>0</td>
            <td>8</td>
            <td>----</td>
        </tr>
        <tr>
            <td>3</td>
            <td>2</td>
            <td>1</td>
            <td>8</td>
            <td>1</td>
            <td>7</td>
            <td>----</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>1</td>
            <td>15</td>
            <td>2</td>
            <td>7</td>
            <td>----</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>1</td>
            <td>15</td>
            <td>2</td>
            <td>7</td>
            <td>7.50</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>2</td>
            <td>0</td>
            <td>0</td>
            <td>10</td>
            <td>7.50</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>2</td>
            <td>10</td>
            <td>1</td>
            <td>9</td>
            <td>7.50</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>2</td>
            <td>19</td>
            <td>2</td>
            <td>9</td>
            <td>7.50</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>2</td>
            <td>19</td>
            <td>2</td>
            <td>9</td>
            <td>9.50</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>3</td>
            <td>0</td>
            <td>0</td>
            <td>4</td>
            <td>9.50</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>3</td>
            <td>4</td>
            <td>1</td>
            <td>5</td>
            <td>9.50</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>3</td>
            <td>9</td>
            <td>2</td>
            <td>5</td>
            <td>9.50</td>
        </tr><tr>
            <td>3</td>
            <td>2</td>
            <td>3</td>
            <td>9</td>
            <td>2</td>
            <td>5</td>
            <td>4.50</td>            
    </table>

</div>

#### b)

O problema que o fluxograma estaria resolvendo é o problema de calcular
as médias de um dado número de alunos, para um dado número de notas.

<div style="page-break-after: always;"></div>

#### c) & d)

```C
#include <stdio.h>

int main()
{
    int na, ca, i, c;
    float m, s, n;

    puts("Entre o numero de alunos:");
    scanf("%d", &na);

    puts("Entre o numero de notas a serem entradas para cada aluno:");
    scanf("%d", &ca);

    for (i = 1; i <= na; i++)
    {
        s = 0;
        c = 0;

        while (c < ca)
        {
            printf("Entre a nota de numero %d do %d° aluno:\n", c + 1, i);
            scanf("%f", &n);
            s += n;
            c++;
        }

        m = s / c;

        printf("Media do %d° aluno: %.2f\n\n", i, m);
    }

    return 0;
}
```
