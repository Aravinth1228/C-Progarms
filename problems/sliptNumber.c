#include<stdio.h>
int main(){
    long long n,a,b,c;
    scanf("%lld",&n);
     a= n%10000;
     n/=10000;
        b= n%1000;
        n/=1000;
        c= n;
        printf("%lld-%lld-%lld",c,b,a);
}/*7094268363
70-942-6836*/