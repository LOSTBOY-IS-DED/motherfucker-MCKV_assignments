// write a program to multiply a 3*2 matrice by its transpose

#include <stdio.h>

int main() {
    int matrix[3][2], transpose[2][3], result[3][3] = {0};

    // Input the 3x2 matrix
    printf("Enter elements of the 3x2 matrix:\n");
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 2; ++j)
            scanf("%d", &matrix[i][j]);

    // Calculate the transpose of the matrix
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 2; ++j)
            transpose[j][i] = matrix[i][j];

    // Multiply the original matrix by its transpose
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 2; ++k)
                result[i][j] += matrix[i][k] * transpose[k][j];

    // Display the result matrix
    printf("Result of matrix multiplication (3x3):\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            printf("%d\t", result[i][j]);
        printf("\n");
    }

    return 0;
}
