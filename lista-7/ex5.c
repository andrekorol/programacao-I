#include <stdlib.h>
#include <stdio.h>

int isPrime(int number)
{
    if (((!(number & 1)) && number != 2) || (number < 2) || (!(number % 3) && number != 3))
        return 0;

    for (int k = 1; 36 * k * k - 12 * k < number; ++k)
        if ((!(number % (6 * k + 1))) || (!(number % (6 * k - 1))))
            return 0;

    return 1;
}

int main()
{
    int n, currentNumber, largestPrime, primeNumbers = 0;
    int *numbers = (int *)malloc(sizeof(int));

    puts("Entre a quantidade (n) de numeros a serem entrados:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Entre o %d° numero:\n", i);
        scanf("%d", &currentNumber);
        *(numbers + i - 1) = currentNumber;
        numbers = (int *)realloc(numbers, sizeof(int) * i + 1);
    }

    for (int j = 0; j < n; j++)
    {
        currentNumber = *(numbers + j);
        if (isPrime(currentNumber))
        {
            primeNumbers++;
            largestPrime = (!j || currentNumber > largestPrime) ? currentNumber : largestPrime;
        }
    }

    if (primeNumbers > 0)
    {
        printf("%d dos numeros entrados ", primeNumbers);
        (primeNumbers == 1) ? printf("eh primo\n") : printf("sao primos\n");
        printf("O maior primo entrado eh o %d\n", largestPrime);
    }
    else if (n > 0)
        printf("Nenhum dos numeros entrados eh primo\n");

    free(numbers);

    return 0;
}