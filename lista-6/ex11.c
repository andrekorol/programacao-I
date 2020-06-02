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