#include<stdio.h>
int main(){
    int n,even_num =0,odd_num=0;
    printf("Enter the Limit: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the Values:");
        scanf("%d",&a[i]);
        if(a[i]%2 ==0){
            even_num++;
        } else {
            odd_num++;
        }
    }
    printf("Total Even Numbers: %d\n", even_num);
    printf("Total Odd Numbers: %d\n", odd_num);
    return 0;
}
