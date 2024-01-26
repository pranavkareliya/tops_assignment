/* 9.Find circumference of triangle formula :- triangle = a + b + c */
#include <stdio.h>

int main() {
    
    int a,b,c,t;
    
    printf("Enter the value of a : ");
    scanf("%d",&a);
    
    printf("Enter the value of b : ");
    scanf("%d",&b);
    
    printf("Enter the value of c : ");
    scanf("%d",&c);
    
    t = a + b + c;
    printf("The value of circumference of triangle is %d.", t);

    return 0;
}