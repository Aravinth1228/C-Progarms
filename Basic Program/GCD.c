#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    for(int i=2;i<=n1 && i<=n2; i++){
        if(n1%i==0 && n2%i ==0 ){
            printf(" The GCD is %d ",i);
        }
    }

}/*
Enter two numbers: 14
63
The GCD is 7 
 */