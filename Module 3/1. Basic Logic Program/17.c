/* 17.Calculate person's insurance premium based on salary */

#include<stdio.h>
int main () {
	
	int salary;
	float premium;
	
	printf("Enter Your salary amount : ");
	scanf("%d",&salary);
	
	premium=salary*0.1;
	printf("Insurance Premium is %f",premium);
	
}
