/* 9. C Program to check upppercase or lowercase or digit or special character */

#include<stdio.h>
int main (){
	
	char a;
	
	printf("Enter the Character : ");
	scanf(" %c",&a);
	
	if(a>=65 && a<=90){
		printf("This Character is Uppercase.");
	} else if(a>=97 && a<=122){
		printf(" This Character is Lowercase.");
	} else if(a>=48 && a<=57){
		printf("This is Digit.");
	} else {
		printf("This is special Character.");
	}
	
	return 0;	
}
