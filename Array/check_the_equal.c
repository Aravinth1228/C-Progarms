#include<stdio.h>
int main(){
    int n,m;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    printf("Enter the size of the square matrix: ");
    scanf("%d", &m);
    int a[n][m],b[n][m];
    printf("Enter the values of the first matrix:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values of the second matrix:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j] != b[i][j]){
                printf("The matrix is not equal.\n");
                return 0;
            } 
        }
    }
    printf("The matrix is equal.\n");
    return 0;
}/*
Enter the size of the square matrix: 2
Enter the size of the square matrix: 2
Enter the values of the first matrix:
1
2
3
4
Enter the values of the second matrix:
1
2
3
4
The matrix is equal.
*/