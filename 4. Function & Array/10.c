/*
10. WAP to perform palindrome number using for loop and function
*/

#include <stdio.h>

void palindrome();

int main() {
    
    palindrome();

    return 0;
}

void palindrome() {
    
    int n,r,a,m;
    
    printf("Enter Number : ");
    scanf("%d",&n);
    
    for(a=n;n!=0;n=n/10){
        r = n % 10;
        m = (m*10)+r;
    }
    
    if(a == m){
        printf("%d Number is Palindrome.",a);
    } else {
        printf("%d Number is not Palindrome.",a);
    }
    
}
