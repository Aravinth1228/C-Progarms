#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        count += 1;
        n /= 10;
    }
    printf("Sum of digits: %d\n", count);
}