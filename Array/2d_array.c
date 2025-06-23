#include<stdio.h>
    int main(){
    int i,j,m,n;
    printf("\nEnter the  row:");
    scanf("%d",&n);
    printf("\nEnter the  column:");
    scanf("%d",&m);
  int a[n][m],b[n][m],c[n][m];
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\nEnter the value a[%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("\nEnter the value b[%d][%d] :",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for (i=0;i<n;i++){
        for(j=0;j<m;j++){
          c[i][j]=a[i][j]+b[i][j];
          printf("\t%d",c[i][j]);
        }
        printf("\n");
    }

}