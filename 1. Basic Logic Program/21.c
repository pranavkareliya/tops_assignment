/* 
21. Accept 2 numbers from the user and swap 2 numbers with using 3rd variable and without using 3rd variable.
*/ 

#include <stdio.h>

int main() {
    
    int a,b;
    
    printf("Enter the value of a : ");
    scanf("%d",&a);
    
    printf("Enter the value of b : ");
    scanf("%d",&b);
    
    a = a+b;
    b = a-b;
    
    a = a-b;
    
    printf("a = %d ; b = %d",a,b);

    return 0;
}
