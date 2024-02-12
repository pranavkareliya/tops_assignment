/*
14. Accept 5 numbers from user and find those numbers factorials
*/

#include<stdio.h>

int main(){
	
    int n[5],i,m,fact=1;
    
    for(i=0;i<5;i++){
    	printf("Enter Number : ");
        scanf("%d",&n[i]);
    }
    
    for(i=0;i<5;i++){
        
        fact=1;
    	
    	for(m=n[i];m>=1;m--){
    		fact=fact*m;
		}
        
        printf("Factorial is : %d\n",fact);
        
    }

	return 0;

}
