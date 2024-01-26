/* 1. Write C program to accept two integers and check whether they are equal or not */

#include<stdio.h>

int main (){
	
	int a,b;
	
	printf("Enter a : ");
	scanf("%d",&a);
	
	printf("\nEnter b : ");
	scanf("%d",&b);
	
	if(a==b){
		printf("a = %d and b = %d both are equal.",a,b);
	} else {
		printf("a = %d and b = %d both are not equal.",a,b);
	}
	
	return 0;
	
}
