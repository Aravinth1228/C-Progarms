#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int total_cols = 2 * n + 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < total_cols; j++) {
            if (j == i || j == n || j == (2 * n - i)) {
                printf("*");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    return 0;
}
/*
*0000*0000*
0*000*000*0
00*00*00*00
000*0*0*000
0000***0000
*/  