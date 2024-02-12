/*
16. Calculate the Sum of Natural Numbers Using the While Loop
*/

#include <stdio.h>

int main() {
	
    int n,sum=0;
    
    printf("Enter Number : ");
    scanf("%d",&n);
    
    while(n>0){
        sum+=n;
        n--;
    }
    
    printf("Sum of Natural Number is : %d",sum);
    
    return 0;
    
}
