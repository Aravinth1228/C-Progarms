#include <stdio.h>

int main() {
    float a, b, c, d, det;
    printf("Enter 2x2 matrix elements (a b c d):\n ");
    scanf("%f%f%f%f",&a,&b,&c,&d);

    det = a*d - b*c;
    if (det == 0)
        printf("Matrix not invertible.\n");
    else {
        printf("Inverse:\n");
        printf("| %.2f %.2f |\n",  d/det, -b/det);
        printf("| %.2f %.2f |\n", -c/det,  a/det);
    }
    return 0;
}
/*
Enter 2x2 matrix elements (a b c d):
2
3
5
4
Inverse:
| -0.57 0.43 |
| 0.71 -0.29 |
*/