#include<stdio.h>
int main(){
    int n, rev =0 ,digit=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    printf("Reversed number is: %d\n", rev);
    return 0;
}/*
Enter a number: 123456789
Reversed number is: 987654321
*/