/*
32. Write a C program to input basic salary of an employee and calculate gross salary according to following : 
	Basic Salary <=10000 : HRA = 20% , DA = 80%
	Basic Salary <=20000 : HRA = 25% , DA = 90%
	Basic Salary >20000 : HRA = 30% , DA = 95%
*/

#include<stdio.h>

int main (){
	
	int s,gs,hra,da;
	
	printf("Enter Your Basic Salary : ");
	scanf("%d",&s);
	
	if(s<=10000){
		hra = s * 0.2;
		da = s * 0.8;
		gs = s + hra + da;
		printf("Your Gross Salary is : %d.",gs);
	} else if (s<=20000){
		hra = s * 0.25;
		da = s * 0.9;
		gs = s + hra + da;
		printf("Your Gross Salary is : %d.",gs);
	} else {
		hra = s * 0.3;
		da = s * 0.95;
		gs = s + hra + da;
		printf("Your Gross Salary is : %d.",gs);
	}
	
	return 0;
	
}
