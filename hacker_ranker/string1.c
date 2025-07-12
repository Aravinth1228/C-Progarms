#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (int i = 0; s[i]; ) {
        char c = s[i];
        int count = 0;
        while (s[i] == c) {
            count++;
            i++;
        }
        printf("%c%d", c, count);
    }
    printf("\n");
    return 0;
}/*qqqffftsihiujjj
q3f3t1s1i1h1i1u1j3
*/