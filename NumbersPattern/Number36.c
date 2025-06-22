#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half including middle
    for (int i = 0; i < n; i++) {
        // Leading spaces
        for (int j = 0; j < i; j++) printf(" ");
        
        // First number
        printf("%d", i + 1);
        
        // Spaces between numbers
        int spaces = 2 * (n - i - 1) - 1;
        if (spaces > 0) {
            for (int j = 0; j < spaces; j++) printf(" ");
            printf("%d", i + 1);
        }
        printf("\n");
    }

    // Lower half (mirror of upper half except middle)
    for (int i = n - 2; i >= 0; i--) {
        // Leading spaces
        for (int j = 0; j < i; j++) printf(" ");
        
        // First number
        printf("%d", i + 1);
        
        // Spaces between numbers
        int spaces = 2 * (n - i - 1) - 1;
        if (spaces > 0) {
            for (int j = 0; j < spaces; j++) printf(" ");
            printf("%d", i + 1);
        }
        printf("\n");
    }

    return 0;
}
/*
1     1
 2   2
  3 3
   4
  3 3
 2   2
1     1
*/