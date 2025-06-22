#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the N value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
        for (j=1;j<=i;j++){
            printf("%d ",(j%2==0)?0:1);
        }
        else
        for (j=1;j<=i;j++){
            printf("%d ",(j%2==0)?1:0);
        }printf("\n");
     } return 0;
}
/*0 
1 0
0 1 0
1 0 1 0
0 1 0 1 0*/