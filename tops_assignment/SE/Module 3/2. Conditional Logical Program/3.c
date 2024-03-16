/* 
3. WAP to check if the given year is leap or not 
*/

#include<stdio.h>

int main(){
	
	int y;
	
	printf("Enter Year : ");
	scanf("%d",&y);
	
	if(y%4==0){
		printf("%d Year is Leap Year.",y);
	} else {
		printf("%d Year is not Leap Year.",y);
	}
	
	return 0;
	
}
