#include <stdio.h>
#include <math.h>

int count_digits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

void diarium(int n) {
    int num = n;
    int count = count_digits(n);
    int sum = 0;

    for (int i = count; i >= 1; i--) {
        int digit = num % 10;
        sum += pow(digit, i);
        num /= 10;
    }

    if (sum == n) {
        printf("%d is a Disarium number.\n", n);
    } else {
        printf("%d is not a Disarium number.\n", n);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    diarium(n);
    return 0;
}