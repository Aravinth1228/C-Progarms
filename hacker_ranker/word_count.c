#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char str[10005];
    int M;
    char word[1005];

    scanf("%d", &N);
    getchar();

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    scanf("%d", &M);
    getchar();

    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

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
/*
25
apple banana apple orange
5
apple
2
*/