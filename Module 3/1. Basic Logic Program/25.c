/* 25. Accept 5 Expense from user and find average of expense */

#include<stdio.h>
int main (){
	
	float e1,e2,e3,e4,e5,avg,total;
	
	printf("Enter Expense-1 : ");
	scanf("%f",&e1);
	printf("Enter Expense-2 : ");
	scanf("%f",&e2);
	printf("Enter Expense-3 : ");
	scanf("%f",&e3);
	printf("Enter Expense-4 : ");
	scanf("%f",&e4);
	printf("Enter Expense-5 : ");
	scanf("%f",&e5);
	
	total = e1+e2+e3+e4+e5;
	avg = total/5;
	
	printf("Average of Total Expense : %f",avg);
	
	return 0;
	
}
