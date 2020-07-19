/* *******************************************************************
* Faculdade de Engenharias Arquitetura e Urbanismo (FEAU) (Univap)
* Curso: Engenharia da Computação-Data de Entrega: 18/07/2020
* Autores: Andre Rossi Korol - 01810067
*          Christyan
*
* Turma: 5UNA  Disciplina: Programação - I
* Avaliação parcial (Projeto Final) para compor a nota Prova-II
*
* pessoas.c
* ******************************************************************/

#include <stdio.h>

typedef struct DataNascimento
{
    int dia;
    int mes;
    int ano;
} DataNascimento;

typedef struct Pessoa
{
    char nome[45];
    int idade;
    char sexo; // Usar M para masculino e F para feminino
    DataNascimento data;
} Pessoa;

int main()
{
    int n;

    puts("Entre a quantidade (n) de pessoas a ser entrada: ");
    scanf("%d", &n);

    return 0;
}
