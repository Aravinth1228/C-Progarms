#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int temp = n;
    int sum =0;
    while(temp >0){
        int digit = temp %10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if(sum == n){
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }
}/*153
Armstrong Number*/
