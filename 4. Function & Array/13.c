/*
13. WAP to accet 5 numbers from user and check enter number is even or odd using of array
*/

#include<stdio.h>

int main () {
	
	int i,j,a[10][5];
	
	for(i=0;i<5;i++){
		printf("Enter Number : ");
		scanf("%d",&a[i][0]);
	}
	
	for(i=0;i<5;i++){
		if(a[i][0]%2==0){
			printf("%d Even\n",a[i][0]);
		} else {
			printf("%d Odd\n",a[i][0]);
		}  
	}
	
	return 0;
	
}
