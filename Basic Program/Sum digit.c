#include<stdio.h>
int main(){
    int n,sum =0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0){
        sum += n % 10; // Add the last digit to sum
        n /= 10;       // Remove the last digit
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}/*Enter a number: 12345
Sum of digits: 15
*/