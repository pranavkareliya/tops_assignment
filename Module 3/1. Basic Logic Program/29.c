/* 29. Convert minutes into seconds and hours */

#include<stdio.h>

int main (){
	
	float m,s,h;
	
	printf("Enter Minutes : ");
	scanf("%f",&m);
	
	s = m * 60;
	h = m / 60;
	
	printf("Total Seconds : %f",s);
	
	printf("\nTotal Hours : %f",h);
	
	return 0;
	
}
