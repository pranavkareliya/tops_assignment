/* 
17. Write a C progra to chech weather a triangle can be formed with the given values for the angles
*/

#include<stdio.h>

int main (){
	
	int a,b,c;
	
	printf("Enter value of a : ");
	scanf("%d",&a); 
	
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	printf("Enter value of c : ");
	scanf("%d",&c);
	
	if((a+b>c) && (c+b>a) && (a+c>b)){
		printf("The Triangle can be formed");
	} else {
		printf("The Triangle can not be formed.");
	}
	
	return 0;
	
}
