#include <stdio.h>

int main()
{
    int n, x;
    int riddleNumbers[30];
    riddleNumbers[0] = 1;
    riddleNumbers[1] = 3;

    for (int i = 2; i < 30; i += 2)
    {
        riddleNumbers[i] = riddleNumbers[i - 1] + 5;
        riddleNumbers[i + 1] = riddleNumbers[i] * 3;
    }

    scanf("%d", &n);
    while (n--)
    {
        scanf(" %d", &x);
        printf("%d\n", riddleNumbers[x - 1]);
    }

    return 0;
}