#include<stdio.h>

int main() {
    int n;
    printf("Enter the Limit: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d ", i);
        }
    }
}/*
Enter the Limit: 10
2 3 5 7 */
