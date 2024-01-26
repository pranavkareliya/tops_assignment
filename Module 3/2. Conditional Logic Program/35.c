/*
35. Accept the input month number and print number of days in that month
*/

#include<stdio.h>

int main (){
	
	int month;
	
	printf("Enter Month Number : ");
	scanf("%d",&month);
	
	if(month==1){
		printf("31 Days.");
	} else if(month==2){
		printf("28/29 Days.");
	} else if(month==3){
		printf("31 Days.");
	} else if(month==4){
		printf("30 Days.");
	} else if(month==5){
		printf("31 Days.");
	} else if(month==6){
		printf("30 Days.");
	} else if(month==7){
		printf("31 Days.");
	} else if(month==8){
		printf("31 Days.");
	} else if(month==9){
		printf("30 Days.");
	} else if(month==10){
		printf("31 Days.");
	} else if(month==11){
		printf("30 Days.");
	} else if(month==12){
		printf("31 Days.");
	} else {
		printf("Enter Valid Input....");
	}
	
	return 0;
	
}
