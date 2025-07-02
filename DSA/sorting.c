// Sorting Algorithms in C
#include<stdio.h>
int main()
{ int n,i;
    printf("Enter the size of A:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values of A :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
int j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}/*
Enter the size of A:
7
Enter the values of A :

9 
8
7
4
5
6
1
The sorted array is:1 4 5 6 7 8 9 */