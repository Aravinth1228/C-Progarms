#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(int s=1;s<=i;s++){
            printf(" ");
        }for(j=n-i;j>=1;j--){
            printf("%d",j);
        
        }printf("\n");
    }
    return 0;
}
/*54321
 4321
  321
   21
    1*/