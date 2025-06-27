#include<stdio.h>
int main(){
    FILE *fp;
    int ch;
    fp = fopen("C:\\Users\\sudha\\OneDrive\\Desktop\\any.txt","r");
    if (fp == NULL) {
        printf("#Error opening file.\n");
    
    }
   while(1){
     ch = fgetc(fp);

     if (ch == EOF)
         break;
         printf("%c",ch);

   }
   fclose(fp);
    return 0;
}