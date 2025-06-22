#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        // Move left to right
        for (int i = left; i <= right; i++)
            matrix[top][i] = num++;
        top++;

        // Move top to bottom
        for (int i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;

        // Move right to left
        for (int i = right; i >= left; i--)
            matrix[bottom][i] = num++;
        bottom--;

        // Move bottom to top
        for (int i = bottom; i >= top; i--)
            matrix[i][left] = num++;
        left++;
    }

    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
1 2 3 4 5 
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9
*/