#include <stdio.h>

int main() {
    int n, i, j;
    int num = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            int start = num + i - 1;
            for (j = 0; j < i; j++) {
                printf("%d", start - j);
            }
            num += i;
        } else {
            for (j = 0; j < i; j++) {
                printf("%d", num++);
            }
        }
        printf("\n");
    }

    return 0;
}
/*1
32
456
10987
1112131415*/