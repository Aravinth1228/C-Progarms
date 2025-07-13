// Insertion Sort in C
#include<stdio.h>
int main(){
    int n,j,i,temp;
    printf("Enter the limit:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=1;i<n;i++){
        temp = a[i];
        for(j=i; j>0 && a[j-1]>temp; j--){
            a[j] = a[j-1];
        }
        a[j] = temp;
        printf("Insertion sort:");
        for(int i=0;i<n;i++){
            printf("%d ",a[i]);
     }
     printf("\n");
    }
    
}/*
Enter the limit:5
Enter the values:2
3
1
5
4
Insertion sort:2 3 1 5 4 
Insertion sort:1 2 3 5 4
Insertion sort:1 2 3 5 4
Insertion sort:1 2 3 4 5
*/