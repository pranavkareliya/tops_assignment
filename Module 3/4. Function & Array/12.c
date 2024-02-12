/*
12. WAP to accept 5 students name and store in an array
*/

#include<stdio.h>
int main () {
	
	int i,a[10][5];
	
	for(i=0;i<5;i++){
		printf("Enter Name : ");
		scanf("%s",&a[i][0]);
	}
	
	for(i=0;i<5;i++){
		printf("\n%s\n",a[i]);
	}
	
	return 0;
	
}
