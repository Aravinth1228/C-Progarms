#include <stdio.h>

int main() {
    int i, j, rows, cols;
    int matrix[10][10];
    int count = 0;

    // Input matrix size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }

    // Display matrix
    printf("\nThe Matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Check if matrix is sparse
    if (count >= (rows * cols) / 2) {
        printf("\nIt is a Sparse Matrix.\n");
    } else {
        printf("\nIt is NOT a Sparse Matrix.\n");
    }

    return 0;
}