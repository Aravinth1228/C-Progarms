#include<stdio.h>
int main(){
    float i, r,p,d=2.0,t;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time (in years): ");
    scanf("%f", &t);
    i = (p * r * t) / 100;
    printf("Simple Interest = %.2f\n", i);
    printf("Total Amount = %.2f\n", p + i);
    printf("Discount = %.2f\n", d * i/100);
    printf("Final Amount after discount = %.2f\n", (p + i) - (d * i/100));
    return 0;
}