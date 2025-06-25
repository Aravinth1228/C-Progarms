#include <stdio.h>

int main()
{
    int r1, c1,  i, j;

    printf("Enter rows of first matrix /columns of second matrix : ");
    scanf("%d", &r1);
    printf("Enter columns of first matrix / rows of second matrix: ");
    scanf("%d", &c1);


    int a[r1][c1], b[c1][r1], c[r1][r1];

    printf("\nEnter elements of matrix A (%dx%d):\n", r1, c1);
    for(i=0; i<r1; i++)
        for(j=0; j<c1; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter elements of matrix B (%dx%d):\n", c1, r1);
    for(i=0; i<c1; i++)
        for(j=0; j<r1; j++)
            scanf("%d", &b[i][j]);

    for(i=0; i<r1; i++)
    {
        for(j=0; j<r1; j++)
        {
            c[i][j] = 0;
            for(int k=0; k<c1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nResulting matrix C (%dx%d):\n", r1, r1);
    for(i=0; i<r1; i++)
    {
        for(j=0; j<r1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
Enter rows of first matrix /columns of second matrix : 2
Enter columns of first matrix / rows of second matrix: 2

Enter elements of matrix A (2x2):
1
2
3
1

Enter elements of matrix B (2x2):
1
2
3
1

Resulting matrix C (2x2):
7 4
6 7
*/