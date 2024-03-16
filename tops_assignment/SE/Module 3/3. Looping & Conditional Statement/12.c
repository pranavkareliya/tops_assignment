/*
12. Program of Armstrong Number in C Using For Loop & While Loop.
*/

#include <stdio.h>
#include <math.h>

int main() {
    
    int num,a,r,n=0,res=0;

    printf("Enter an integer: ");
    scanf("%d",&num);

    a = num;

    while (a != 0) {
        a = a/10;
        n++;
    }

    a = num;

    for (;a!=0;a=a/10) {
        r=a%10;
        res+=pow(r,n);
    }

    if (res == num) {
        printf("%d is Armstrong number.\n",num);
    } else {
        printf("%d is not Armstrong number.\n",num);
    }
    
    return 0;
    
}


