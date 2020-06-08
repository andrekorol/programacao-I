#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Candidata
{
    int nota;
    char *nome;
} Candidata;

int main()
{
    int candidatasCount = 0, maiorNota = 0;
    Candidata *concurso = (Candidata *)malloc(sizeof(Candidata));
    char ans = 'Y';
    Candidata *candidata, *vencedora;

    while (tolower(ans) != 'n')
    {
        candidata = (concurso + candidatasCount);
        candidata->nome = malloc(sizeof(char) * 32);

        printf("Entre o nome da candidata:\n");
        scanf("%s", candidata->nome);

        printf("Entre a nota da candidata %s:\n", candidata->nome);
        scanf("%d", &candidata->nota);
        if (candidata->nota < 0)
            candidata->nota = 0;
        else if (candidata->nota > 100)
            candidata->nota = 100;

        concurso = (Candidata *)realloc(concurso, sizeof(Candidata) *
                                                      (++candidatasCount + 1));

        printf("Deseja continuar adicionando candidatas? [Y/n]\n");
        scanf(" %c", &ans);
    }

    for (int i = 0; i < candidatasCount; i++)
    {
        candidata = (concurso + i);
        if (candidata->nota >= maiorNota)
        {
            vencedora = candidata;
            maiorNota = vencedora->nota;
        }
    }

    printf("A candidata vencedora foi a %s, com uma nota igual a %d!\n",
           vencedora->nome, vencedora->nota);

    free(concurso);

    return 0;
}