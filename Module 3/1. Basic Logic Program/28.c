/* 
28. Convert years into days and months 
*/

#include<stdio.h>
int main (){
	
	float d,m,y;
	
	printf("Enter Number of Years : ");
	scanf("%f",&y);
	
	d = y * 365;
	m = y * 12;
	
	printf("Total Days : %f",d);
	printf("\nTotal Months : %f",m);
	
	return 0;
	
}
