/* 20. Accept monthly salary from the user and 
DEDUCT 
10% insurance premium, 
10% loan installment. Find out remaining salary */ 

#include<stdio.h>
int main (){
	
	float salary,ins,loan,rs;
	
	printf("Enter Your Monthly Salary : ");
	scanf("%f",&salary);
	
	ins = salary * 0.1;
	
	loan = salary * 0.1;
	
	rs = salary - ins - loan;
	printf("Your Remaining Salary : %f",rs);
	
}
