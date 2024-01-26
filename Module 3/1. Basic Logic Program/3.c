/* 3. WAP to find area and circumference of circle  */
#include <stdio.h>

int main() {
    
    // a = area, c = circumference
    
    float a,c,r,r2,pi=3.14;
    
    printf("Enter the value of r for area of circle : ");
    scanf("%f",&r);
    
    c=2*pi*r;
    printf("The area of circle is %f",c);

    printf("\nEnter the value of r2 for circumference of circle : ");
    scanf("%f",&r2);
    
    a=pi*r*r;
    printf("The area of circle is %f",a);

    return 0;
}