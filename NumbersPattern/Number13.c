#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,j,n,s,num = 1;
     scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }for(j=1;j<=i;j++){
            printf("%d",num);
            num++;
        }printf("\n");
    }
    return 0;
}
/* 1
   23
  456
 78910
1112131415*/