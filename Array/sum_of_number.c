#include<stdio.h>
int main(){
    int n,sum =0;
    printf("Enter the Limite:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Values:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("%d",sum);
}
/*
Enter the Limite:5
Enter the Values:1
Enter the Values:2
Enter the Values:3
Enter the Values:4
Enter the Values:5
15
*/