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
        j = i - 1;
        while(j >= 0 && a[j] > temp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
     }
     printf("Sorted array:");
     for(i=0;i<n;i++){
         printf("%d ",a[i]);
     }
}/*
Enter the limit:5
Enter the values:3
2
1
5 
4
Sorted array:1 2 3 4 5 
*/