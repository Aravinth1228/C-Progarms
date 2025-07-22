#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];  
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    int moves = 0;
    for (int i = 1; i < n; i++) {
        while (a[i] <= a[i - 1]) {
            a[i]++;
            moves++;
        }
    }

    printf("%d\n", moves);
    return 0;
}