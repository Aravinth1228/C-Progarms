#include<stdio.h>
union demo{
    int a;/*1*/
    char b;

}d;
int main(){

   d.a=50;
   d.b='c';
   
   printf("\nValue of A:%d",d.a);
   printf("\nValue of B:%c",d.b);
    return 0;
}