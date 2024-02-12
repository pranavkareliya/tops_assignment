/*
13. calculate the Factorial of a Given Number using while loop
*/

#include<stdio.h>

int main(){
	
    int n,m,fact=1;
    
    printf("Enter Number : ");
    scanf("%d",&n);
    
    m=n;
    
    while(m>=1){
        fact=fact*m;
        m--;
    }
    
    printf("Factorial is : %d",fact);
    
    return 0;
    
}
