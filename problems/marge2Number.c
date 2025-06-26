#include<stdio.h>
#include<math.h>
int count(int n){
    int count = 0;
    while(n > 0){
        n /= 10;
        count++;
    }
    return count;
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
  int sum = count(b);
  for(int i =1;i<= sum; i++){
       a*=10;

  printf("The merged number is: %d\n", a + b);

    return 0;

}
/*Enter two numbers: 123
456
The merged number is: 123456*/