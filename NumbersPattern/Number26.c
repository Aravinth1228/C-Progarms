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
             if (j < i - 1) {
                    printf("*");
                }
            }
            num += i;
        } else {
            for (j = 0; j < i; j++) {
                printf("%d", num++);
               if (j < i - 1) {
                    printf("*");
                }
            }
           
        }
        printf("\n");
    }

    return 0;
}
/*1
3*2
4*5*6
10*9*8*7
11*12*13*14*15*/