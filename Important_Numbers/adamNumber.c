#include<stdio.h>

// Function to reverse a number and return it
int rev(int n) {
    int rev_num = 0, digit;
    while(n > 0) {
        digit = n % 10;
        rev_num = rev_num * 10 + digit;
        n /= 10;
    }
    return rev_num;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int n_sq = n * n;
    int rev_n = rev(n);
    int rev_n_sq = rev_n * rev_n;
    int rev_n_sq_reversed = rev(rev_n_sq);

    if(n_sq == rev_n_sq_reversed) {
        printf("%d is an Adam number.\n", n);
    } else {
        printf("%d is not an Adam number.\n", n);
    }
}/*
Enter a number: 12
12 is an Adam number.
*/