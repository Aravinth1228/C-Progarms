#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int printed = 0;

    for (int n = a; n <= b; n++) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0) sum += i;
        if (sum > n) {
            if (printed) printf(" ");
            printf("%d", n);
            printed = 1;
        }
    }

    printf("\n");
    return 0;
}/*

2
55
12 18 20 24 30 36 40 42 48 54
*/  