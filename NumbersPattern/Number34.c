#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
     int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < i + n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
/*
1 2 3 4 5 
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9*/
