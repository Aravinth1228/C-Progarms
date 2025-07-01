#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    if (strstr(str1, str2) != NULL) {
        printf("Found");
    } else {
        printf("Not Found");
    }
    return 0;
}/*
Enter the first string: aravinth is a good boy
Enter the second string: boy
Found*/