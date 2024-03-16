/* 
30. If bill exceeds Rs. 800 then surcharge of 18% will be charged and the minimun bill should be of Rs. 256/-
*/

#include<stdio.h>
int main (){
	
	int amt;
	float per;
	
	printf("Enter the amount : ");
	scanf("%d",&amt);
	
	if(amt>=800){
		per(amt+amt*0.18);
		printf("%d",per);
	} 
	
	return 0;
	
}
