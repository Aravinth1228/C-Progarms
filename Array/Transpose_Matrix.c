#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the number of rows: ");
    scanf("%d", &r);
    
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int matrix[r][c];         
    int transpose[c][r];      

    printf("Enter the value :\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Normal of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
return 0;
}   /*
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements of the matrix:
1
2
3
1
Normal of the matrix:
1 2
3 1
Transpose of the matrix:
1 3
2 1
*/