#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct lab {
    int no_computer;
    char os[100];
    int ram;
};
typedef struct mobile{
    int no_mobile;
    char os[100];
    int ram;
} mobile;
int main(){
    struct lab c1;
    mobile m1;
    printf("Enter the number of computers: ");
    scanf("%d", &c1.no_computer);
    printf("Enter the operating system: ");
    scanf("%s", c1.os);
    printf("Enter the RAM: ");
    scanf("%d", &c1.ram);

    printf("Enter the number of mobiles: ");
    scanf("%d", &m1.no_mobile);
    printf("Enter the operating system: ");
    scanf("%s", m1.os);
    printf("Enter the RAM: ");
    scanf("%d", &m1.ram);

    printf("No of Computer    : %d\n",c1.no_computer);
    printf("Operating System  : %s\n",c1.os);
    printf("RAM               : %d\n",c1.ram);
    printf("No of Mobile      : %d\n",m1.no_mobile);
    printf("Operating System  : %s\n",m1.os);
    printf("RAM               : %d\n",m1.ram);

    return 0;
}
/*
Enter the number of computers: 10
Enter the operating system: mac    
Enter the RAM: 18
Enter the number of mobiles: 29
Enter the operating system: iphnoe
Enter the RAM: 18
No of Computer    : 10
Operating System  : mac
RAM               : 18
No of Mobile      : 29
Operating System  : iphnoe
RAM               : 18
*/