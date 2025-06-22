#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print decreasing numbers from n to n-i
        for (int j = n; j > n - i - 1; j--) {
            printf("%d", j);
        }

        // Repeat the last number (n - i) to complete the row
        for (int j = 0; j < n - i - 1; j++) {
            printf("%d", n - i);
        }

        printf("\n");
    }

    return 0;
}
/*
4444
4333
4322
4321
*/