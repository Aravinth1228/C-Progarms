#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int size = 2 * n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Minimum distance from any edge
            int min = i < j ? i : j;
            if (min > size - 1 - i)
                min = size - 1 - i;
            if (min > size - 1 - j)
                min = size - 1 - j;

            // Print value
            printf("%d", n - min);
        }
        printf("\n");
    }

    return 0;
}
/*
555555555
544444445
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/