#include <stdio.h>

int main()
{
    int matrixSize = 4;
    int matrix[matrixSize];
    int i, determinant;

    for (i = 0; i < matrixSize; i++)
        scanf("%d", &matrix[i]);

    determinant = matrix[0] * matrix[3] - matrix[1] * matrix[2];
    printf("%d\n", determinant);

    return 0;
}