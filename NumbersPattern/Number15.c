#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,n,num=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",num);
            num++;
            if(j<i){
            printf("*");
        }
      }
            printf("\n");
    }
    return 0;
}
/*1
2*3
4*5*6
7*8*9*10
11*12*13*14*15*/