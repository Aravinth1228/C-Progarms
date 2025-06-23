#include<stdio.h>
int main(){
    int n,min;
    printf("Enter the Limite:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the values:");
        scanf("%d",&a[i]);
    }
    min = a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("The Minimum Element is: %d",min);
    return 0;
}
/*
Enter the Limite:3
Enter the values:4
Enter the values:2
Enter the values:6
The Minimum Element is: 2
*/