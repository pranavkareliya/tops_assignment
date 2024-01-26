/* 31. Convert kilometers into meters */

#include <stdio.h>
int main() {
	
	float k,m;
	
	printf("Enter Kilometers : ");
	scanf("%f",&k); 
	
	m = k * 1000;
	
	printf("\n%f Kilometers into %f meters.",k,m);
	
	return 0;
	
}
