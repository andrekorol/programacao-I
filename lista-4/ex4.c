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