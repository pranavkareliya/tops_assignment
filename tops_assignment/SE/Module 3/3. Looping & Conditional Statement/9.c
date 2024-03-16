/*
9. Write a program make a summation of given number (E.g., 1523 Ans:11)
*/

#include<stdio.h>

int main(){
	
    int n,a,sum=0;
    
    printf("Enter Number :");
    scanf("%d",&n);
    
    while(n!=0){
       a=n%10;
       sum=sum+a;
       n=n/10;
    }
    
    printf("Total sum is : %d",sum);
    
    return 0;
}
