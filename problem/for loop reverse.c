#include <stdio.h>

int main(){
    int n;
    printf("Counting down from 5 to 1:");
    scanf("%d",&n);
    
    for (int i=n;i>0;i--){
        printf("\n%d",n);
    };
    return 0;
}