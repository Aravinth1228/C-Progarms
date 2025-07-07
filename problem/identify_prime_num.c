#include<stdio.h>

int main() {
    int num, temp, digits[10], count = 0;
    scanf("%d", &num);

    temp = num;
    while(temp != 0) {
        int digit = temp % 10;
        if(digit == 2 || digit == 3 || digit == 5 || digit == 7) {
            digits[count++] = digit;
        }
        temp /= 10;
    }

    for(int i = count - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }
}