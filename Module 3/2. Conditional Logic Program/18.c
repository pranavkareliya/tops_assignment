/* 
18. Write a C program to calculate profit and loss on transaction
*/

#include<stdio.h>
int main(){
	
	int p,s;
	
	printf("Enter Purchase Price : ");
	scanf("%d",&p);
	
	printf("Enter Selling Price : ");
	scanf("%d",&s);
	
	if(p>s) {
		printf("Loss of Rs. -%d/-",p-s);
	} else {
		printf("Profit of Rs. %d/-",s-p);
	}
	
	return 0;
	
}
