#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int N;
    char str[10005];
    int M;
    char word[1005];
    scanf("%d", &N);
    fgets(str, sizeof(str), stdin);
    scanf("%d", &M);
  
    fgets(word, sizeof(word), stdin);

    int count = 0;
    char* token = strtok(str, " ");
    while (token != NULL) {
        if (strcmp(token, word) == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }
    printf("%d\n", count);
    return 0;
}
