/* 
33. WAP to input week number and print week day
*/

#include<stdio.h>

int main(){
	
	int day;
	
	pintf("Enter Week Number : ");
	scanf("%d",&day);
	
	if(day==1){
		printf("Monday");
	} else if (day==2){
		printf("Tuesday");
	} else if (day==3){
		printf("Wednesday");
	}else if (day==4{
		printf("Thursday");
	}else if (day==5){
		printf("Friday");
	}else if (day==6){
		printf("Saturday");
	}else if (day==7){
		printf("Sunday");
	} else {
		printf("Enter Valid Input....");
	}
	
	return 0;
	 
}
