#include<stdio.h>
int count(int n){
    int even_num =0,odd_num = 0;
    while(n>0){
        int digit = n % 10;
        if(digit % 2 == 0) {
            even_num += digit; 
            digit /= 10;
        } else {
            odd_num += digit; 
            digit /= 10;
        }
        n /= 10; 
    }
    printf("Even digits sum: %d\n", even_num);
    printf("Odd digits sum: %d\n", odd_num);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    count(n);
    return 0;
}