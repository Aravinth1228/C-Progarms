#include<stdio.h>
#define LIMITE 5
#define MSG "HI IM ARAVINTH\n"
#define custom_message(a)\
 printf("\n" #a " HOW ARE YOU?\n")
int main(){
    for(int i=0; i<LIMITE; i++){
        printf("%d  \n",i);
    }
    printf("%s\n", MSG);
    custom_message("HI SAI");

    printf("\nFile :"__FILE__);
    printf("\nLine :%d", __LINE__);
    printf("\nDate :%s", __DATE__);
    printf("\nTime :%s", __TIME__);
    return 0;
}
/*
0  
1  
2
3
4
HI IM ARAVINTH


"HI SAI" HOW ARE YOU?

File :c:\Users\sudha\OneDrive\Desktop\C\C-Progarms\preprocessor_directives.c
Line :14
Date :Jun 27 2025
Time :14:11:24
*/