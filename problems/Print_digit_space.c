#include<stdio.h>
int main() {
    int num, rev = 0;
    printf("Enter the Number:");
    scanf("%d", &num);

    int temp = num;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    while (rev > 0) 
    {
        printf("%d", rev % 10);
        rev /= 10;
        if (rev > 0) printf(" ");
    }
    return 0;
}
// input:1234
// output:1 2 3 4