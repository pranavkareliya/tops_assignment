/* 
11. WAP to find number is even or odd in ternary operator 
*/

#include<stdio.h>
int main (){
	
	int a;
	
	printf("Enter the Number : ");
	scanf("%d",&a);
	
	(a%2==0) ? printf("The Number is Even.") : printf("The Number is Odd.");
	
	return 0;
	
}
