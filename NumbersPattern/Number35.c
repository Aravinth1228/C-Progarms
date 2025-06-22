#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 1;

    for (int i = 0; i < n; i++) {
        int a = count;
        int b = count + 1;

        if (i % 2 == 0)
            printf("%02d %02d\n", a, b);
        else
            printf("%02d %02d\n", b, a);

        count += 2;
    }

    return 0;
}
/*
01 02
04 03
05 06
08 07
09 10
*/