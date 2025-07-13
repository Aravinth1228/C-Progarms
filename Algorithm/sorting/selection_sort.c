//selection sort
#include <stdio.h>
int main(){
    int n, i,j, temp;
    printf("Enter the Size :");
    scanf("%d", &n);
    int a[n];
    printf("Enter the Values :");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
            }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        } printf("The sorted array is:");
        for(int i=0;i<n;i++){
             printf("%d ",a[i]);
    }
    printf("\n");
    }
   
    return 0;
}
/*Enter the Size :5
Enter the Values :5
8
6
1
7
The sorted array is:1 8 6 5 7 
The sorted array is:1 5 8 6 7
The sorted array is:1 5 6 8 7
The sorted array is:1 5 6 7 8
*/