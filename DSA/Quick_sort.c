#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the A Array:\n");
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);

     }
     int size = sizeof(a)/sizeof(a[0]);
  
     for (i=0;i<size ;i++){
        for (j=i+1;j<size ;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
     }

    printf("The sorted array is:");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}/*
Enter the size:5
Enter the A Array:
1
2
5
6
4
The sorted array is:12456
*/