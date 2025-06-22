#include<stdio.h>
void reverse(int n){
    int sum = 0, digit,temp = n;
    while(n > 0){
        digit = n % 10;
        sum = sum * 10 + digit; 
        n = n / 10; 
    }
    if(temp == sum)
        printf("%d is a palindrome.\n", temp);
    else
        printf("%d is not a palindrome.\n", temp);
}
int main(){
    int n;
    printf("Enter a number: ");     
    scanf("%d", &n);
    reverse(n);
    return 0;
}