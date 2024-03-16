/* 
27. Convert days into months 
*/

#include <stdio.h>

int main(){
	
	float d,m;
	
	printf("Enter Days : ");
	scanf("%f",&d);
	
	m = d/30;
	
	printf("\nMonths : %f",m);
	
	return 0;
	
}
