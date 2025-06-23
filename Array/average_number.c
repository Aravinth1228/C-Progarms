#include<stdio.h>
int main(){
    int n;
    float avg=0;
    printf("Enter the Limite:");
    scanf("%d",&n);
    int a[n];   
    for(int i=0;i<n;i++){
        printf("Enter the Values:");
        scanf("%d",&a[i]);
        avg += a[i];
    }
    avg /= n;
    printf("The Average is: %.02f\n",avg);
    return 0;
}
/*
Enter the Limite:5
Enter the Values:1
Enter the Values:2
Enter the Values:3
Enter the Values:4
Enter the Values:5
The Average is: 3.00
*/