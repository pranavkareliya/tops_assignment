/*
11. WAP to accept 5 numbers from user and display in reverse order using for loop and array
*/

#include<stdio.h>

int main () {
	
	int i,j,a[5][5];
	
	for(i=0;i<5;i++){
		printf("Enter Number : ");
		scanf("%d",&a[i][0]);
	}
	
	for(i=4;i>=0;i--){
	    printf("\n%d\n",a[i][0]);
	}
	
	return 0;
	
}
