#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,n,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }for(j=1;j<=2*i-1;j++){
            printf("%d",j);
        
        }printf("\n");
    }
    return 0;
}
/*
    1
   123
  12345
 1234567
123456789
*/                                                                                                                                                                                                                                                                                                                                              