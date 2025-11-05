#include <stdio.h>

int main() {
    int n, m, i, j, d;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);
    int matrix[n][m];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    printf("Diagonal traversal of the matrix:\n");

    for (d = 0; d < n + m - 1; d++) {
        if (d % 2 == 0) {
            i = (d < n) ? d : n - 1;
            j = d - i;
            while (i >= 0 && j < m) {
                printf("%d ", matrix[i][j]);
                i--;
                j++;
            }
        } else {
            j = (d < m) ? d : m - 1;
            i = d - j;
            while (j >= 0 && i < n) {
                printf("%d ", matrix[i][j]);
                i++;
                j--;
            }
        }
    }

    printf("\n");
    return 0;
}
