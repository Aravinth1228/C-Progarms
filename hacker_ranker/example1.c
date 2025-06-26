/*
Split the mobile number into two parts

  sample input : 7654675432

  sample output : 75432 76546
  */
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     long long  n;
    scanf("%lld",&n);
    long long right = n%100000;
     long long  left = n/100000;
    printf("%lld %lld",right,left);
    return 0;
}
/*7094268363
68363 70942*/