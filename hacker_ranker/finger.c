#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int fingers[8] = {1, 2, 3, 4, 5, 4, 3, 2};
    printf("%d\n", fingers[(n - 1) % 8]);

    return 0;
}/*
33 
1
*/