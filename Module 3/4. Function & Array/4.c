/*
4. WAP to find factorial using recursion
*/

#include <stdio.h>

int fact(int);

int main() {
    
    int a = 4;
    
    printf("Enter Number : ");
    scanf("%d",&a);
    
    printf("Factorial of %d = %d", a, fact(a));
    
    return 0;
}

int fact(int n){
    if(n>0){
        return n*fact(n-1);
    }else{
        return 1;
    }
}
