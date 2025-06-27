#include <stdio.h>

int f(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return f(n-1)+f(n-2);
    }
}

int main()
{
    int num;
    printf("Enter the Number:");
    scanf("%d",&num);
    
    for(int i=0;i<num;i++){
        printf("%d ",f(i));
    }
    return 0;
}/*
Enter the Number:5
0 1 1 2 3 
*/