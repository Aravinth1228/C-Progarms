/*Write a program to accept a number as input and print its number of digits. */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int count = 0;
    while(n>0){
        n  /= 10;
        count ++;
    }
    printf("%d",count);
    return 0;
}
/*2345678 
7 */