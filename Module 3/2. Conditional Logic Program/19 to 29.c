/* 
19 to 29. Write a program in c to calculate and print the electricity bill of a given Customer.
	The Customer ID, name and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customers.
	The Charge are as Follows : 
	
	20. Unit								-	Charge/unit
	
	22. upto 350							-	@1.20
	23. 350 and above but less than 600		-	@1.50
	26. 600 and above but less than 800		-	@1.80
	28. 800 and above						-	@2
	 
*/

#include<stdio.h>
int main (){
	
	int unit,c_id;
	float bal;
	char n;
	
	printf("Enter Customer ID : ");
	scanf("%d",&c_id);
	
	printf("Enter Your Name : ");
	scanf(" %c",&n);
	
	printf("Enter Consumed Units : ");
	scanf("%d",&unit);
	
	if(unit<=350){
		bal=unit*1.20;
		printf("%f",bal);
	} else if(unit>350 && unit<=600){
		bal=unit*1.50;
		printf("%f",bal);
	} else if(unit>600 && unit<=800){
		bal=unit*1.80;
		printf("%f",bal);
	} else if(unit>800){
		bal=unit*2;
		printf("%f",bal);
	}
	
	return 0;
	
}
