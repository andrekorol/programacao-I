/* *******************************************************************
* Faculdade de Engenharias Arquitetura e Urbanismo (FEAU) (Univap)
* Curso: Engenharia da Computação-Data de Entrega: 17/06/2020
* Autor: Andre Rossi Korol - 01810067
*
* Turma: 5UNA  Disciplina: Programação - I
* Avaliação parcial referente ao 1 - Bimestre
*
* pratica.c
* ******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 45

int getIntInput()
{
    int intInput;
    char *inputString = (char *)malloc(sizeof(char) * 21);
    char *end;
    int base = 10;
    long longInput;

    fgets(inputString, sizeof inputString, stdin);
    longInput = strtol(inputString, &end, base);

    intInput = (int)longInput;

    free(inputString);

    return intInput;
}

void getName(char *nameBuffer)
{
    fgets(nameBuffer, sizeof nameBuffer, stdin);

    // remove LF, CR, CRLF, LFCR, ...
    nameBuffer[strcspn(nameBuffer, "\r\n")] = 0;
}

int main()
{
    char name[MAX_NAME_LEN], oldestName[MAX_NAME_LEN], youngestName[MAX_NAME_LEN];
    int age, oldestAge = 0, youngestAge = 1e5;
    int sex, oldestSex, youngestSex;
    int males = 0, females = 0;
    float malePercentage, femalePercentage;
    int olderMales = 0, olderFemales = 0;
    int n;

    printf("Entre a quantidade (n) de pessoas a ser entrada:\n");
    n = getIntInput();

    for (int i = 0; i < n; i++)
    {
        printf("Entre o nome da %d° pessoa: ", i + 1);
        getName(name);
        printf("Entre o sexo de %s:\n", name);
        sex = getIntInput();
        printf("Entre a idade ");
        (sex - 1) ? printf("da ") : printf("do ");
        printf("%s:\n", name);
        age = getIntInput();

        // Se for do sexo feminino
        if (sex - 1)
        {
            females++;
            olderFemales += (age >= 18);
        }
        // Se for do sexo masculino
        else
        {
            males++;
            olderMales += (age >= 25);
        }

        // Confere pessoa mais velha
        if (age >= oldestAge)
        {
            oldestAge = age;
            oldestSex = sex;
            strcpy(oldestName, name);
        }

        // Confere pessoa mais nova
        if (age <= youngestAge)
        {
            youngestAge = age;
            youngestSex = sex;
            strcpy(youngestName, name);
        }
    }

    // Mostra os resultados na tela
    printf("Quantidade de pessoas do sexo masculino = %d\n", males);
    printf("Quantidade de pessoas do sexo feminino = %d\n", females);

    printf("Quantidade de pessoas do sexo masculino com idade ≥ 25 anos = %d\n",
           olderMales);
    printf("Quantidade de pessoas do sexo feminino com idade ≥ 18 anos = %d\n",
           olderFemales);

    malePercentage = ((float)males / (float)n) * 100;
    printf("Percentual de pessoas do sexo masculino = %.2f%%\n", malePercentage);
    femalePercentage = ((float)females / (float)n) * 100;
    printf("Percentual de pessoas do sexo feminino = %.2f%%\n", femalePercentage);

    printf("A pessoa mais velha se chama %s, e eh do sexo %s\n", oldestName,
           (oldestSex - 1) ? "feminino" : "masculino");
    printf("A pessoa mais nova se chama %s, e eh do sexo %s\n", youngestName,
           (youngestSex - 1) ? "feminino" : "masculino");

    return 0;
}
