/* 4.WAP to make simple calculator (operation include Addition, Substraction, Multiplication, Division, Modulo) 
using conditionl statement */

#include<stdio.h>

int main(){
	
	float a,b;
	char choice;
	
	printf("Enter First Value : ");
	scanf("%f",&a);
	
	printf("Enter Second Value : ");
	scanf("%f",&b);
	
	printf("Press a for Addition\nPress s for Substraction\nPress m for Multiplication\nPress d for Division\nPress m for Modulo\n");
	scanf(" %c",&choice);
	
	if(choice=='a'){
		printf("%f + %f = %f",a,b,a+b);
	} else if(choice=='s'){
		printf("%f - %f = %f",a,b,a-b);
	} else if(choice=='m'){
		printf("%f * %f = %f",a,b,a*b);
	} else if(choice=='d'){
		printf("%f / %f = %f",a,b,a/b);
	} else if(choice=='m'){
		printf("%f modulo %f = %f",a,b,a%b);
	} else {
		printf("Please Enter Valid Input...");
	}
	
	return 0;
	
}
