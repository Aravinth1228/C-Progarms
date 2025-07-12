#include <stdio.h>

int main() {
    char s[1001], out[1001];
    scanf("%s", s);
    int i = 0, j = 0;

    while (s[i]) {
        char ch = s[i++];
        int count = 0;
        while (s[i] >= '0' && s[i] <= '9')
            count = count * 10 + (s[i++] - '0');
        for (int k = 0; k < count; k++)
            out[j++] = ch;
    }

    out[j] = '\0';
    printf("%s\n", out);
    return 0;
}/*
h2m4a5
hhmmmmaaaaa
*/