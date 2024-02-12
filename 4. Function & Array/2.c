/*
2. WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)
*/

#include <stdio.h>

int main() {
    
    int a,b,choice=0;
    
    printf("Enter value of A : ");
    scanf("%d",&a);
    printf("Enter value of B : ");
    scanf("%d",&b);
    
        printf("Addition : 1\n");
        printf("Subtraction : 2\n");
        printf("Multiplication : 3\n");
        printf("Division : 4\n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("The Addition of %d + %d : %d",a,b,a+b);
                break;
            case 2:
                printf("The Substraction of %d - %d : %d",a,b,a-b);
                break;
            case 3:
                printf("The Multiplication of %d * %d : %d",a,b,a*b);
                break;
            case 4:
                printf("The Divisiion of %d / %d : %d",a,b,a/b);
                break;
            default:
                printf("Invalid");
                break;
            
        }
    
    return 0;
    
}
