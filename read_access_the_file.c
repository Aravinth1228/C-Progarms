#include<stdio.h>
int main(){
    FILE *fp;
   char ch;
    fp = fopen("C:\\Users\\sudha\\OneDrive\\Desktop\\any.txt","r");
    if (fp == NULL) {
        printf("#Error opening file.\n");

    } else {
        printf("File opened successfully.\n");
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