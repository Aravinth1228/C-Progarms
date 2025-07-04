// [number = 0.5,1.5,4.5,13.5,40.5]
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=0.5;i<=n;i++){
        float num = i*3 ;
        printf("%.1f ", num);
    }
}