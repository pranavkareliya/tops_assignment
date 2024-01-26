/* 12. WAP to find maximum number among 3 numbers using ternary operator. */

#include <stdio.h>

int main() {
    
    int a,b,c,v;
    
    printf("Enter the value of a : ");
    scanf("%d",&a);
    
    printf("Enter the value of b : ");
    scanf("%d",&b);
    
    printf("Enter the value of c : ");
    scanf("%d",&c);
    
    v = (a>b && a>c) ? printf("The Greater Number is %d.",a) : (b>a && b>c) ? printf("The Greater Number is %d.",b) : (c>a && c>b) ? printf("The Greater Number is %d.",c) : printf("Enter Only Digit....");

    return 0;
}
