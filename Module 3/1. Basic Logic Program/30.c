/* 30. WAP to convert years into days and days into years */

#include<stdio.h>
int main (){
	
	float d,y,d1,y1;
	
	printf("Enter Number of Years : ");
	scanf("%f",&y);
	
	d = y * 365;
	
	printf("\nTotal Number of Days : %f",d);
	
	printf("\nEnter Number of Days : ");
	scanf("%f",&d1);
	
	y = d1/365;
	
	printf("\nYears : %f",y);
	
	return 0;
	
}
