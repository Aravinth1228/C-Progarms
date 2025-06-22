#include<stdio.h>
int main(){
    int n;
    printf("Enter the limite:");
    scanf("%d",&n);
    int a1[n],c[n];
    for(int i=0;i<n;i++){
        printf("Enter the values:");
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<n;i++){
        c[i]=a1[i];
    }
    for(int i=0; i<n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
/*
Enter the limite:3
Enter the values:1 
Enter the values:2
Enter the values:3
1 2 3 
*/