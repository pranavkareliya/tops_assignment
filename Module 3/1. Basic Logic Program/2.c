/* 2. Write a programe to make simple calculator (to make additon, substraction, multiplication, division and modulo)*/

#include <stdio.h>

int main() {
    
    float a,b,c;
    printf("Enter the first value : ");
    scanf("%f",&a);
    
    printf("Enter the second value : ");
    scanf("%f",&b);
    
    c = a + b;
    c = a - b;
    c = a * b;
    c = a / b;
    c = a % b;

    printf("The value of %f + %f is : %f", a, b, a+b);
    
    printf("\nThe value of %f - %f is : %f", a, b, a-b);
    
    printf("\nThe value of %f * %f is : %f", a, b, a*b);
    
    printf("\nThe value of %f / %f is : %f", a, b, a/b);
    
    printf("\nThe value of %f % %f is : %f", a, b, a%b);

    return 0;
}