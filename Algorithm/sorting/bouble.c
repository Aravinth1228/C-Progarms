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
            printf("The sorted array is:");
            for(int i=0;i<n;i++){
                printf("%d ",a[i]);
            }
            printf("\n");
            
        }
    }
    
    return 0;
}/*
Enter the size of A:
5
Enter the values of A :
2
3
4
5
1
The sorted array is:2 3 4 5 1 
The sorted array is:2 3 4 5 1
The sorted array is:2 3 4 5 1
The sorted array is:2 3 4 1 5
The sorted array is:2 3 4 1 5
The sorted array is:2 3 4 1 5
The sorted array is:2 3 1 4 5
The sorted array is:2 3 1 4 5
The sorted array is:2 1 3 4 5
The sorted array is:1 2 3 4 5 
*/