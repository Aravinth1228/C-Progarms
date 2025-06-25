#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    printf("Enter the String:" );
    gets(c);
      printf("\nReverse : %s ",strrev(c) );
   
    return 0;
}