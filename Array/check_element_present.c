#include<stdio.h>
int main(){
    int n,count = 0;
    printf("Enter the Limite: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter the Values:");
        scanf("%d",&a[i]); 
    }
    int s;
    printf("Search the NUmber:");
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(s == a[i]){
            printf("The Number is present.");
            count =1;
            break;
        }
        
        }
        if(!count){
            
            printf("The Number is Absent.");
        }
    }
    /*
    Enter the Limite: 3
Enter the Values:1
Enter the Values:3
Enter the Values:5
Search the NUmber:5
present the Number
*/

