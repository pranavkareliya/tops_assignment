/* 
31. Write a Program in C to read any Month Number in interger and display the number of days for this month.
*/

#include<stdio.h>
int main() {
	
	int month;
	
	printf("Enter Month Number : ");
	scanf("%d",&month);
	
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
		printf("Number of days is 31.");
	} else if(month==2){
		printf("Number of days is 28/29.");
	} else if(month==4 || month==6 || month==9 || month==11) {
		printf("Number of days is 30.");
	} else {
		printf("Enter Valid Month Number....");
	}
	
	return 0;
	
}
