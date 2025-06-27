#include<stdio.h>
void p_n(int n) {
    if (n == 0) {
        return;
    }
    else{
    p_n(n - 1);
    printf("%d ", n);
}
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    p_n(n);
}/*
Enter the value of n: 5
1 2 3 4 5 
*/