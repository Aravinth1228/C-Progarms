#include <stdio.h>

int main() {
    int n;
scanf("%d", &n) ;

    int rows = (n % 2 == 0) ? n - 1 : n;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", ((i + j) % 2 == 0) ? 1 : 0);
        }
        printf("\n");
    }

    return 0;
}
/*10101
01010
10101
01010
10101*/