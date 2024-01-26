/* 26. Convert temperature Fahrenheit to Celsius */

#include <stdio.h>

int main() {
    float c,f;
	
	printf("Enter Fahrenheit : ");
	scanf("%f",&f);
	
	c = (f - 32) *5/9;
	
	printf("Celsius : %f",c);
	
	return 0;
}
