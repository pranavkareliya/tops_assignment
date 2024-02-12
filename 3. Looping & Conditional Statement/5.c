/*
5. WAP to print factorial of given number
*/

#include <stdio.h>

int main() {
	
    int c,n,fact=1;
    
    printf("Enter Number : ");
    scanf("%d",&n);
    
    if(n>0){
        for(c=n;c>0;c--){
            fact*=c;
        }
        printf("Factorial of %d is : %d",n,fact);
    }else{
        printf("Invalid");
    }
    
    return 0;
}
