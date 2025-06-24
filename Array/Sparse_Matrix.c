#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols], i, j, count = 0;

    printf("Enter matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    printf("Sparse Matrix (row col value):\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            if(mat[i][j] != 0) {
                printf("%d %d %d\n", i, j, mat[i][j]);
                count++;
            }

    printf("Total non-zero elements: %d\n", count);
    return 0;
}

