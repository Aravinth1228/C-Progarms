#include<stdio.h>
#include<string.h>
int main(){

    char str1[20];
    printf("Enter main string : ");
   fgets(str1, sizeof(str1), stdin);
    char str2[20];
    printf("Enter sub string : ");
    fgets(str2, sizeof(str2), stdin);

char x = str2[0];
int found = 0;

for(int i = 0; i <= strlen(str1) - strlen(str2); i++) {
    int count = 0;
    for(int j = 0; j < strlen(str2); j++) {
        if(str2[j] == str1[i + j]) {
            count++;
        } else {
            break;
        }
    }
    if(count == strlen(str2)) {
        found = 1;
        break;
    }
}

if(found) {
    printf("Found\n");
} else {
    printf("Not Found\n");
}
}/*
Enter main string : hi im a arvi
Enter sub string : arvi
Found*/
