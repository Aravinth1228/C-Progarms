#include<stdio.h>
int main(){
    int n,max;
    printf("Enter the Limite: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the Values: ");
        scanf("%d",&a[i]); 
    }
    max = a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("The Maximum Element is: %d",max);
    return 0;
}
/*
Enter the Limite: 5
Enter the Values: 1
Enter the Values: 2
Enter the Values: 5
Enter the Values: 6
Enter the Values: 7
The Maximum Element is: 7
*/