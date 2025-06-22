#include <stdio.h>

void kaprekar(int n) {
    int sq = n * n;
    int num = n;
    int count = 0;
    while (num > 0) {
        count++;
        num /= 10;
    }
    int divisor = 1;
    for (int i = 0; i < count; i++) {
        divisor *= 10;
    }
    int right = sq %  divisor; 
    int left = sq / divisor;  

    if (right > 0 && left + right == n)
        printf("%d is a Kaprekar number.\n", n);
    else
        printf("%d is not a Kaprekar number.\n", n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    kaprekar(n);
    return 0;
}
