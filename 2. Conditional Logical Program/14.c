/* 
14. WAP to find largest of three numbers 
*/

#include <stdio.h>

int main() {
    
    int a,b,c;
    
    printf("Enter the value of a : ");
    scanf("%d",&a);
    
    printf("Enter the value of b : ");
    scanf("%d",&b);
    
    printf("Enter the value of c : ");
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("The Greater Number is %d.",a);
    } else if (b>a && b>c){
        printf("The Greater Number is %d.",b);
    } else if (c>a && c>b) {
        printf("The Greater Number is %d.",c);
    } else {
        printf("Enter Only Digit....");
    }

    return 0;
}
