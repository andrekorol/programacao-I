/* *******************************************************************
* Faculdade de Engenharias Arquitetura e Urbanismo (FEAU) (Univap)
* Curso: Engenharia da Computação-Data de Entrega: 18/07/2020
* Autores: Andre Rossi Korol - 01810067
*
* Turma: 5UNA  Disciplina: Programacao - I
* Avaliacao parcial referente ao 2 - Bimestre
*
* pesquisadores.c
* ******************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define E 2.71828

typedef struct dados
{
    char nome[45];
    int periodo;
    int a;
    int b;
    float r;
} dados;

float taxaCrescimento(float t)
{
    return 300 * powf(E, 0.3 * t);
}

float trapezios(int a, int b)
{
    float xn = (float)b;
    float x0 = (float)a;
    int n = 500;
    float h = (xn - x0) / (float)n;
    float x = x0 + h;
    float soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma += taxaCrescimento(x);
        x += h;
    }
    float p = h * ((taxaCrescimento(x0) + taxaCrescimento(xn)) / 2.0 + soma);

    return p;
}

void pegaNome(char bufferNome[45])
{
    char nl;
    scanf("%c", &nl); // ignora o \n
    fgets(bufferNome, sizeof(char) * 45, stdin);

    // remove LF, CR, CRLF, LFCR, ...
    bufferNome[strcspn(bufferNome, "\r\n")] = 0;
}

dados pegaPesquisador()
{
    dados pesquisador;
    puts("Entre um nome:");
    pegaNome(pesquisador.nome);
    puts("Entre o periodo do teste:");
    scanf(" %d", &pesquisador.periodo);
    puts("Entre o limite inferior do intervalo:");
    scanf(" %d", &pesquisador.a);
    puts("Entre o limite superior do intervalo:");
    scanf(" %d", &pesquisador.b);

    pesquisador.r = 1200 + trapezios(pesquisador.a, pesquisador.b);

    return pesquisador;
}

int comparaPesquisador(const void *s1, const void *s2)
{
    dados *p1 = (dados *)s1;
    dados *p2 = (dados *)s2;

    return p1->periodo - p2->periodo;
}

char *periodoPorExtenso(int periodo)
{
    char *periodos[10] = {"Um",
                          "Dois",
                          "Tres",
                          "Quatro",
                          "Cinco",
                          "Seis",
                          "Sete",
                          "Oito",
                          "Nove",
                          "Dez"};
    return periodos[periodo - 1];
}

int main()
{
    int n;
    puts("Entre o numero (n) de pesquisadores:");
    scanf("%d", &n);

    dados pesquisadores[n];
    int periodosMaiores = 0;
    dados maiorPeriodo, menorPeriodo;
    for (int i = 0; i < n; i++)
    {
        pesquisadores[i] = pegaPesquisador();
        if (pesquisadores[i].r > 1500)
            periodosMaiores++;
        if (i == 0)
        {
            maiorPeriodo = pesquisadores[i];
            menorPeriodo = pesquisadores[i];
        }
        else
        {
            if (pesquisadores[i].r > maiorPeriodo.r)
                maiorPeriodo = pesquisadores[i];
            if (pesquisadores[i].r < menorPeriodo.r)
                menorPeriodo = pesquisadores[i];
        }
    }

    qsort(pesquisadores, n, sizeof(dados), comparaPesquisador);

    printf("Periodo Nome Pesquisador Intervalo[a,b] Valor Populacional\n");
    for (int i = 0; i < n; i++)
    {
        printf("%-8s%-16s [%d,%d] \t\t%.2f\n",
               periodoPorExtenso(pesquisadores[i].periodo),
               pesquisadores[i].nome, pesquisadores[i].a,
               pesquisadores[i].b, pesquisadores[i].r);
    }
    printf("#################################\n");
    printf("Maior periodo populacional: %s, Nome: %s, Valor Populacional: %.2f\n",
           periodoPorExtenso(maiorPeriodo.periodo), maiorPeriodo.nome, maiorPeriodo.r);

    printf("Menor periodo populacional: %s, Nome: %s, Valor Populacional: %.2f\n",
           periodoPorExtenso(menorPeriodo.periodo), menorPeriodo.nome, menorPeriodo.r);

    printf("#################################\n");
    printf("A populacao foi maior que 1500 em %d periodos\n", periodosMaiores);

    return 0;
}
