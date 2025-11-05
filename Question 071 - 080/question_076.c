#include <stdio.h>

int main() {
    int i, j, rows, cols, symmetric = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows != cols) {
        printf("Matrix is not square, hence not symmetric.\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }

    if (symmetric)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
