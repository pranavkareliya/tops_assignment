/*
8-b. Write a program of structure for five employee that provides the following information - print and display 
	empno, empname, address and age.
*/

#include<stdio.h>

struct empDetails{
	int emp_no,emp_age;
	char emp_name[500],emp_address[500];
};

int main () {
	
	struct empDetails e1,e2,e3,e4;
	int i,j;
	
	for(i=0;i<3;i++){
    	printf("Enter Employee No : ");
	    scanf("%d",&e1.emp_no);
	
	    printf("Enter Employee Name : ");
	    scanf("%s",&e2.emp_name);
	    
	    printf("Enter Employee Address : ");
	    scanf("%s",&e3.emp_address);
	    
	    printf("Enter Employee Age : ");
	    scanf("%d",&e4.emp_age);
	    
	    
	    printf("Employee No is : %d.\n",e1.emp_no);
	    printf("Employee Name is : %s.\n",e2.emp_name);
	    printf("Employee Address is : %s.\n",e3.emp_address);
	    printf("Employee Age is : %d.\n\n",e4.emp_age);
	}
	
	return 0;	
}
