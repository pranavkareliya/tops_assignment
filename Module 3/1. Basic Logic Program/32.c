/* 32. Accept two numbers and find out its sum check its size */

#include<stdio.h>

int main(){
	
	int a,b,z;
	
	printf("Enter First Value : ");
	scanf("%d",&a);
	
	printf("Enter Second Value : ");
	scanf("%d",&b);
	
	z = a + b;
//	Sizeof(sum);
	
	printf("size of the variable x is %d.", sizeof(z));
	
	return 0;
	
}
