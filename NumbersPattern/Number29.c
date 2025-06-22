#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = n * n;

    while (top <= bottom && left <= right) {
   
        for (int i = left; i <= right; i++) {
            matrix[top][i] = num--;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num--;
        }
        right--;

        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = num--;
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = num--;
        }
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]); 
        }
        printf("\n");
    }

    return 0;
}
/*
25 24 23 22 21 
10  9  8  7 20 
11  2  1  6 19 
12  3  4  5 18
13 14 15 16 17
*/