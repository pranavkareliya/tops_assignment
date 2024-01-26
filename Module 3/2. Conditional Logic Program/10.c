/* 10. WAP to check whether a number is positive or negative or zero */

#include<stdio.h>
int main (){
	
	int a;
	
	printf("Enter the Digit : ");
	scanf("%d",&a);
	
	if(a>0){
		printf("The %d Number is Positive.",a);
	} else if(a<0){
		printf("The %d Number is Negative.",a);
	} else {
		printf("The Number is Zero.");
	}
	
	return 0;
	
}
