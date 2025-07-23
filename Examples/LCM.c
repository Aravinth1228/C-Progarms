#include<stdio.h>
int main() {
    int n1, n2, lcm;
    printf("Enter the Two Number: ");
    scanf("%d %d", &n1, &n2);
    int max = (n1 > n2) ? n1 : n2;
    lcm = max;
    while (1) {
        if (lcm % n1 == 0 && lcm % n2 == 0) {
            printf("The LCM is %d\n", lcm);
            break;
        }
        lcm++;
    }
    return 0;
}