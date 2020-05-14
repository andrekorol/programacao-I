#include <stdio.h>
#include <time.h>

int main()
{
    time_t rawtime;
    struct tm *timeinfo;
    int currentYear, birthYear, age;

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    currentYear = timeinfo->tm_year + 1900;
    puts("Entre o ano de nascimento:");
    scanf("%d", &birthYear);
    age = currentYear - birthYear;

    if (age >= 35)
        puts("Pode ser candidato a governador");
    if (age >= 29)
        puts("Pode concorrer ao senado");
    if (age >= 16)
        puts("Pode votar");
    else
        puts("Idade nao permitida para votar ou ser candidato");

    return 0;
}