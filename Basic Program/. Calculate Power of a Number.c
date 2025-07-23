#include<stdio.h>
int main(){
    int n;
    int pow;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the power: ");
    scanf("%d", &pow);

    for(int i=0;i<=pow;i++){
        int result = 1;
        for(int j=0;j<i;j++){
            result *= n;
        }
        printf("%d^%d = %d\n", n, i, result);
    }
}/*Enter a number: 2
Enter the power: 3
2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
*/
