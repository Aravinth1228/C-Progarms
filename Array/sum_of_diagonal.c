#include<stdio.h>
int main(){
    int n,m, sum = 0;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the size of the square matrix: ");
    scanf("%d", &m);
    int matrix[n][m];
    printf("Enter the values of the matrix:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        sum += matrix[i][i]; 
    }
    printf("The matrix is:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the primary diagonal elements: %d\n", sum);
}/*
Enter the size of the square matrix: 3
Enter the size of the square matrix: 3
Enter the values of the matrix:
1
2
3
4
5
6
7
8
9
The matrix is:
1 2 3
4 5 6
7 8 9
Sum of the primary diagonal elements: 15
*/