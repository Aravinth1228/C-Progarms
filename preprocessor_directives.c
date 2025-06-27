#include<stdio.h>
#define LIMITE 5
#define MSG "HI IM ARAVINTH\n"
#define custom_message(a)\
 printf("\n" #a " HOW ARE YOU?\n")
int main(){
    for(int i=0; i<LIMITE; i++){
        printf("Hello World!\n");
    }
    printf("%s", MSG);
    custom_message("HI SAI");

    printf("\nFile :"__FILE__);
    printf("\nLine :%d", __LINE__);
    printf("\nDate :%s", __DATE__);
    printf("\nTime :%s", __TIME__);
    return 0;
}