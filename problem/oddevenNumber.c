#include<stdio.h>
void odd_even(int n){
    int num=0,even_num = 0,odd_num = 0;
    while(n>0){
      num = n%10;
      if( num % 2 == 0){
          even_num = even_num *10 + num;
      } 
      else{
          odd_num = odd_num * 10 + num;
      }
        n /= 10;
    } printf("Even digits: %d\n", even_num);
    printf("Odd digits: %d\n", odd_num);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    odd_even(n);
    return 0;
}