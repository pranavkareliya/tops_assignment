/*
10.Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: 5)
*/

#include<stdio.h>

int main(){
	
    int n,l,f;
    
    printf("Enter Number : ");
    scanf("%d",&n);
    
    f=n;
    
    while(f>=10){
        f=f/10;
    }

    l=n%10;

    printf("sum of first digit %d and last digit %d is : %d",f,l,f+l);
    
    return 0;

}
