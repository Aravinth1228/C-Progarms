#include<stdio.h>
int main(){
    int n,m,i;
    printf("Enter the size of A:");
    scanf("%d",&n);
    printf("Enter the size of B:");
    scanf("%d",&m);
    int a[n],b[m],c[n+m];
    printf("Enter the values of A:");
    for(i=0;i<n;i++){      
            scanf("%d",&a[i]);
       
    }
    printf("Enter the values of B:");
    for(i=0;i<m;i++){ 
            scanf("%d",&b[i]);
    }
   int z=n+m;
    for(i = 0; i < z ; i++) {
        if(i < n)
            c[i] = a[i];
        else
            c[i] = b[i - n];
    }
    printf("The combination of the two arrays is:");
    for(i=0;i<n+m;i++){
        printf("%d\n",c[i]);
    }
   return 0;
}

/*
Enter the size of A:2
Enter the size of B:2
Enter the values of A:
1
2
Enter the values of B:
2
1
The combination of the two arrays is:
1
2
2
1
*/