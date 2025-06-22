#include<stdio.h>
void add(int *a, int *b) {
    int sum;
    sum = *a + *b;
    printf("Sum of a and b is: %d\n", sum);
    printf("Value of a is: %d\n", a);

}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);

    add(&a, &b);
    return 0;
}