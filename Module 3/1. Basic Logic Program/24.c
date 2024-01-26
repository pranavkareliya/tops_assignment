/* 24. Accept 5 employees name, salary, count average and total salary */

#include<stdio.h>
int main (){
	char e1,e2,e3,e4,e5;
	int s1,s2,s3,s4,s5,total_salary;
	float avg;
	
	printf("Enter Employee-1 Name : ");
	scanf(" %c",&e1);
	printf("Enter Employee-2 Name : ");
	scanf(" %c",&e2);
	printf("Enter Employee-3 Name : ");
	scanf(" %c",&e3);
	printf("Enter Employee-4 Name : ");
	scanf(" %c",&e4);
	printf("Enter Employee-5 Name : ");
	scanf(" %c",&e5);
	
	printf("Enter Employee-1 Salary : ");
	scanf("%d",&s1);
	printf("Enter Employee-2 Salary : ");
	scanf("%d",&s2);
	printf("Enter Employee-3 Salary : ");
	scanf("%d",&s3);
	printf("Enter Employee-4 Salary : ");
	scanf("%d",&s4);
	printf("Enter Employee-5 Salary : ");
	scanf("%d",&s5);
	
	total_salary = s1+s2+s3+s4+s5;
	avg = total_salary/5;
	
	printf("The Average Salary of Employees : %f",avg);
	
	printf("\nThe Total Salary of all employees : %d",total_salary);

    return 0;
	
}
