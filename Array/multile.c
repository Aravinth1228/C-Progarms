#include <stdio.h>

int main()
{
    int r1, c1, r2, c2, i, j;

    printf("Enter rows of first matrix : ");
    scanf("%d", &r1);
    printf("Enter columns of first matrix / rows of second matrix: ");
    scanf("%d", &c1);
    printf("Enter columns of second matrix: ");
    scanf("%d", &c2);

    int a[r1][c1], b[c1][c2], c[r1][c2];

    printf("\nEnter elements of matrix A (%dx%d):\n", r1, c1);
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter elements of matrix B (%dx%d):\n", c1, c2);
    for(i=0; i<c1; i++)
        for(j=0; j<c2; j++)
            scanf("%d", &b[i][j]);

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            c[i][j] = 0;
            for(int k=0; k<c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nResulting matrix C (%dx%d):\n", r1, c2);
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
