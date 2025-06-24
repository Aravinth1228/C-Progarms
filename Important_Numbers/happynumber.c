#include<stdio.h>
#include<stdbool.h>
int sum(int n){
    int t=0;
 while(n)
{
    int digit = n % 10;
    t += digit * digit;
    n /= 10;
}    return t;
}
bool is_happy(int n){
  while(1){
    if(n == 1) return true;
    if(n == 4) return false;
    n = sum(n);
  }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(is_happy(n)){
        printf("%d is a happy number.\n", n);
    } else {
        printf("%d is not a happy number.\n", n);
    }
}/*
Enter a number: 19
19 is a happy number.
*/```