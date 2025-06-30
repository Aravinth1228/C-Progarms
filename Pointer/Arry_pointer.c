#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
   
    for(int i=0;i<5;i++){
        printf("%p\n",&a[i]);
    }
    printf("%p  \n",&a);

}
/*
0061FF08
0061FF0C
0061FF10
0061FF14
0061FF18
0061FF08
*/