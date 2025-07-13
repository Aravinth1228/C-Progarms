#include<stdio.h>
int main(){
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        n /= 10; // Remove the last digit
        count++; // Increment the count for each digit
    }
    printf("Number of digits: %d\n", count);
    return 0;
}/*
Enter a number: 123456789
Number of digits: 9
*/