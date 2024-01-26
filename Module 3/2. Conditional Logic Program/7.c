/* 7. Accept marks from users and check pass or fail */

#include<stdio.h>
int main (){
	
	int a;
	
	printf("Enter Your Marks : ");
	scanf("%d",&a);
	
	if(a<35){
		printf("You Fail in Exam.");
	} else if(a>100){
		printf("Please Enter Appropriate marks.");
	} else {
		printf("You Pass in Exam.");
	}
	
	return 0;
	
}
