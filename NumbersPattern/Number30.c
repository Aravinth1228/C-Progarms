#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        int zeroCount = 2 * (n - i) - 1;
        if (zeroCount > 0) {
            for (int z = 0; z < zeroCount; z++) {
                printf("0");
            }
        } else if (zeroCount == -1) {
            
        }

        if (i != n) {
            for (int j = i; j >= 1; j--) {
                printf("%d", j);
            }
        } else {
            for (int j = i - 1; j >= 1; j--) {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}
/*
100000001
120000021
123000321
123404321
123454321
*/