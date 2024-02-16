/*
4. WAP to find factorial using recursion
*/

#include <stdio.h>

int fact(int);

int main() {
    
    int a;
    
    printf("Enter Number : ");
    scanf("%d",&a);
    
    printf("Factorial of %d = %d", a, fact(a));
    
    return 0;
}

int fact(int b){
    if(b>0){
        return b*fact(b-1);
    }else{
        return 1;
    }
}
