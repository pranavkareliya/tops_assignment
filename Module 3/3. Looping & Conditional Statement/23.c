/*
23. C Program to Reverse a Number Using FOR Loop
*/

#include <stdio.h>

int main() {
    
    int n,i,r=0,res=0;

    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i=1;n!=0;i++){
        res=n%10;
        r=r*10+res;
        n=n/10;
    }

    printf("Reversed number: %d\n",r);
    
    return 0;
    
}
