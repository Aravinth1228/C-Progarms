#include<stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main(){
    int n;
    printf("Enter the value:");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is: %d\n", n, fact);
}
/*
Enter the value:5
Factorial of 5 is: 120
*/