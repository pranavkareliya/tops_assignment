/*
7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
*/

#include <stdio.h>

int main() {
	
    int n,r;
    
    printf("Enter Number : ");
    scanf("%d",&n);
    
    r=n;
    
    while(r!=0){
        printf("%d",r%10);
        r/=10;
    }
    
    return 0;
    
}
