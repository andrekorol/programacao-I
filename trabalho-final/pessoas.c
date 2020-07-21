/* *******************************************************************
* Faculdade de Engenharias Arquitetura e Urbanismo (FEAU) (Univap)
* Curso: Engenharia da Computação-Data de Entrega: 18/07/2020
* Autores: Andre Rossi Korol - 01810067
*          Christyan Shindy Ramiro de Lima - 01910587
*
* Turma: 5UNA  Disciplina: Programacao - I
* Avaliacao parcial (Projeto Final) para compor a nota Prova-II
*
* pessoas.c
* ******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define NUM_MAX_PESSOAS 20

typedef struct Data
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct Pessoa
{
    char nome[45];
    int idade;
    char sexo[1]; // Usar M para masculino e F para feminino
    Data Data_Nascimento;
} Pessoa;

typedef struct Total_Sexo
{
    int sexoMasculino;
    int sexoFeminino;
    float percentualMasculino;
    float percentualFeminino;
} Total_Sexo;

typedef struct SexoMaiorIdade
{
    int homens;
    int mulheres;
    int indicesHomens[NUM_MAX_PESSOAS];
    int indicesMulheres[NUM_MAX_PESSOAS];
} SexoMaiorIdade;

// Verifica se eh fevereiro de um ano bissexto
int fevAnoBissexto(int ano, int mes)
{
    return ((!(ano % 100) && !(ano % 400) && mes == 2) || (!(ano % 4) && mes == 2));
}

int idade(Data Data_Nascimento)
{
    // Usa o header time.h pra pegar a data atual
    // (em relacao a execucao do programa)
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);

    // Desconstroi o struct Data para pegar os valores individuais
    // da data de nascimento dada como argumento
    int dia = Data_Nascimento.dia;
    int mes = Data_Nascimento.mes;
    int ano = Data_Nascimento.ano;

    // Numero de de dias para cada mes do ano
    int diasNoMes[] = {31,  // janeiro
                       28,  // fevereiro
                       31,  // marco
                       30,  // abril
                       31,  // maio
                       30,  // junho
                       31,  // julho
                       31,  // agosto
                       30,  // setembro
                       31,  // outubro
                       30,  // novembro
                       31}; // dezembro

    // Ajusta o numero do dia de acordo com o mes
    dia = diasNoMes[mes - 1] - dia + 1;
    if (fevAnoBissexto(ano, mes))
        dia++;

    // Calcula a idade a partir do numero de dias, anos e meses
    dia += timeinfo->tm_mday;
    mes = (12 - mes) + (timeinfo->tm_mon);
    ano = (timeinfo->tm_year + 1900) - ano - 1;

    // Verifica se ano atual eh bissexto no qual fevereiro tem 29 dias
    if ((fevAnoBissexto((timeinfo->tm_year + 1900), (timeinfo->tm_mon + 1))) && (dia >= (diasNoMes[timeinfo->tm_mon] + 1)))
    {
        dia -= (diasNoMes[timeinfo->tm_mon] + 1);
        mes++;
    }
    else if (dia >= diasNoMes[timeinfo->tm_mon])
    {
        dia -= diasNoMes[timeinfo->tm_mon];
        mes++;
    }
    if (mes >= 12)
    {
        ano++;
        mes -= 12;
    }

    return ano;
}

// Compara structs Pessoa pelo campo idade
int comparaPessoa(const void *s1, const void *s2)
{
    Pessoa *p1 = (Pessoa *)s1;
    Pessoa *p2 = (Pessoa *)s2;

    return p1->idade - p2->idade;
}

int Inteiro_String(char texto[], int numero_Maximo)
{
    printf(texto);
    char Caractere[numero_Maximo];
    gets(Caractere);

    return atoi(Caractere);
}

Total_Sexo calculo_sexo(Pessoa pessoas[], int n)
{
    int total_Masculino = 0;
    int total_Feminino = 0;

    for (int i = 0; i < n; i++)
    {
        if (pessoas[i].sexo[0] == 'M' || pessoas[i].sexo[0] == 'm')
            total_Masculino++;
        else if (pessoas[i].sexo[0] == 'F' || pessoas[i].sexo[0] == 'f')
            total_Feminino++;
    }

    Total_Sexo Total_Sexo;
    Total_Sexo.sexoMasculino = total_Masculino;
    Total_Sexo.sexoFeminino = total_Feminino;

    Total_Sexo.percentualMasculino = (total_Masculino * 100.0 / n);
    Total_Sexo.percentualFeminino = (total_Feminino * 100.0 / n);

    return Total_Sexo;
}

SexoMaiorIdade calculo_maior_idade(Pessoa pessoas[], int n)
{
    int i;
    int homens = 0;
    int mulheres = 0;
    int indicesHomens[n];
    int indicesMulheres[n];

    for (i = 0; i < n; i++)
    {
        if (toupper(pessoas[i].sexo[0]) == 'M' && pessoas[i].idade >= 25)
        {
            indicesHomens[homens] = i;
            homens++;
        }
        else if (toupper(pessoas[i].sexo[0]) == 'F' && pessoas[i].idade >= 18)
        {
            indicesMulheres[mulheres] = i;
            mulheres++;
        }
    }

    SexoMaiorIdade pessoasFiltradas;
    pessoasFiltradas.homens = homens;
    pessoasFiltradas.mulheres = mulheres;
    memcpy(pessoasFiltradas.indicesHomens, indicesHomens, sizeof(indicesHomens));
    memcpy(pessoasFiltradas.indicesMulheres, indicesMulheres, sizeof(indicesMulheres));

    return pessoasFiltradas;
}

char *Mes_Extenso(int extenso)
{
    char *mes[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    return mes[extenso - 1];
}

void Imprimir_Pessoas(Pessoa pessoas[], int n)
{
    printf("#################################\n");
    for (int i = 0; i < n; i++)
    {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Sexo: %s\n", pessoas[i].sexo);
        printf("Data de Nascimento: %d/%d/%d\n", pessoas[i].Data_Nascimento.dia, pessoas[i].Data_Nascimento.mes, pessoas[i].Data_Nascimento.ano);
        printf("Idade: %d\n", pessoas[i].idade);
        char *prt = Mes_Extenso(pessoas[i].Data_Nascimento.mes);
        printf("Mes de Nascimento: %s\n", prt);
        printf("#################################\n");
    }
}

int main()
{
    int i;
    char numero[10];
    printf("Entre a quantidade (n) de pessoas: ");
    gets(numero);
    int n = atoi(numero);

    Pessoa pessoas[n];

    for (i = 0; i < n; i++)
    {
        printf("\nDigite o nome: ");
        gets(pessoas[i].nome);

        printf("Digite o sexo (M - para masculino e F - para feminino): ");
        gets(pessoas[i].sexo);

        printf("Digite a data de nascimento\n");
        pessoas[i].Data_Nascimento.dia = Inteiro_String("Dia: ", 2);
        pessoas[i].Data_Nascimento.mes = Inteiro_String("Mes: ", 2);
        pessoas[i].Data_Nascimento.ano = Inteiro_String("Ano: ", 4);

        pessoas[i].idade = idade(pessoas[i].Data_Nascimento);
    }

    // Ordena as pessoas por idade
    qsort(pessoas, n, sizeof(Pessoa), comparaPessoa);

    // Imprime o relatorio
    Imprimir_Pessoas(pessoas, n);

    Total_Sexo Total_Sexo = calculo_sexo(pessoas, n);

    printf("Total de pessoas do sexo Masculino: %d\n", Total_Sexo.sexoMasculino);
    printf("Total de pessoas do sexo Feminino: %d\n", Total_Sexo.sexoFeminino);

    printf("Porcentagem  Masculina: %.2f \n", Total_Sexo.percentualMasculino);
    printf("Porcentagem  Feminina:  %.2f \n", Total_Sexo.percentualFeminino);
    printf("#################################\n");

    SexoMaiorIdade pessoasFiltradas = calculo_maior_idade(pessoas, n);
    for (i = 0; i < pessoasFiltradas.homens; i++)
    {
        if (i == 0)
            puts("Pessoas do sexo masculino com idade >= 25:");
        printf("%s - %d anos\n", pessoas[pessoasFiltradas.indicesHomens[i]].nome,
               pessoas[pessoasFiltradas.indicesHomens[i]].idade);
    }
    for (i = 0; i < pessoasFiltradas.mulheres; i++)
    {
        if (i == 0)
            puts("Pessoas do sexo feminino com idade >= 18:");
        printf("%s - %d anos\n", pessoas[pessoasFiltradas.indicesMulheres[i]].nome,
               pessoas[pessoasFiltradas.indicesMulheres[i]].idade);
    }

    return 0;
}
