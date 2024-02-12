/*
1. Write a program to find out the max number from given array using function
*/

#include<stdio.h>

int main () {
	
	int i,a[5],max=0;

	for(i=0;i<5;i++){
    	printf("Enter Number : ");
	    scanf("%d",&a[i]);
	
		if(a[i] > max){
			max=a[i];
		}
	}
	
	printf("%d is max number.",max);
	
	return 0;
	
}
