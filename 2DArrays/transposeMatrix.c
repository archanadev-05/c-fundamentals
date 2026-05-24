#include <stdio.h>

int main(void) {
    int rows, cols;

    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1) {
        return 1;
    }
    printf("Enter number of columns: ");
    if (scanf("%d", &cols) != 1) {
        return 1;
    }

    int matrix[10][10];
    int transpose[10][10];

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        printf("Rows and columns must be between 1 and 10.\n");
        return 1;
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Original matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
