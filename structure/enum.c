#include<stdio.h>

enum day { no, yes, sai=9  };
enum point { x = 19, y = 65 };

int main() {
    enum day a;
    enum point b;
    a = sai;
    b = y;
    printf("\nEnter A :%d", a); // Output: 9
    printf("\nEnter B :%d", b); // Output: 65

    return 0;
}
/*
Enter A :9
Enter B :65
*/