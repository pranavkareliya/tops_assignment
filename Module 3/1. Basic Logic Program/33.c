/* 33. C Program to read Interger and Print First Three Powers(N^1,N^2,N^3) */

#include<stdio.h>

int main (){
	
	int a,n;
	
	printf("Enter the Number : ");
	scanf("%d",&a);
	
	n=a*a*a;
	
	printf("The First Three Power of %d Number is : %d",a,n);
	
	return 0;
	
}
