#include<stdio.h>
int main(){
    int i, j, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i > 0 && j > 0 && i == j){
                printf("%d", i+1); // Print diagonal number
            } else {
                printf("%d", n); // Print n elsewhere
            }
        }
        printf("\n");
    }
    return 0;
}/*
55555
52555
55355
55545
55555*/