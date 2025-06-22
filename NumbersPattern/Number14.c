#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,n,s;
    scanf("%d",&n);
     for(i=0;i<n;i++){
        for(s=0;s<=i-1;s++){
            printf(" ");
        }for(j=1;j<=n-i;j++){
            printf("%d",j);
        }printf("\n");
    }
    return 0;
}
/* 12345
    1234
     123
      12
       1*/