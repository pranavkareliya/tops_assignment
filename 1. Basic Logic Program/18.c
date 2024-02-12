/* 18. Calculate person's Annual salary */

#include<stdio.h>
int main() {
	
	int s,a;
	
	printf("Enter your monthly salary : ");
	scanf("%d",&a);
	
	s = a*12;
	
	printf("Your Annual salary is : %d",s);
	
	return 0;
	
}
