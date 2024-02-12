/*
5. Check Number is Positive or Negative 
*/

#include<stdio.h>
int main (){
	
	float a;
	
	printf("Enter The Number : ");
	scanf("%f",&a);
	
	if(a>0){
		printf("The Number is Postivie.");
	} else if(a<0){
		printf("The Number is Negative.");
	} else {
		printf("The Number is 0.");
	}
	
	return 0;	
}
