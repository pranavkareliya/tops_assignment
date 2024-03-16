/*
15. Calculate sum of 10 numbers using of while loop
*/

#include<stdio.h>

int main(){
	
    int a[10],sum=0,i,j;
    
    for(i=0;i<10;i++){
    	printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    
    for(j=0;j<10;j++){
    	sum = sum + a[j];
	}
    
    printf("Total sum is : %d",sum);
    
    return 0;
    
}
