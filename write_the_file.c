#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("C:\\Users\\sudha\\OneDrive\\Desktop\\C\\C-Progarms\\aravinth.txt", "w");
    if (fp == NULL) {
        printf("#Error opening file.\n");
    }
    fprintf(fp, "\ngood morning\n");
    fclose(fp);
    return 0;
}