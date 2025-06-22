#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        }
        if(i == -1){
            printf("Sum of even numbers from 1 to %d is: %d\n", n, sum);
            break;
        }
    }
}