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
    int digits[10], i = 0;

    // Store digits in array (from right to left)
    while (num > 0) {
        digits[i++] = num % 10;
        num /= 10;
    }

    int sum = 0;
    // Calculate sum using correct powers (leftmost digit gets power 1)
    for (int j = count - 1, p = 1; j >= 0; j--, p++) {
        sum += pow(digits[j], p);
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