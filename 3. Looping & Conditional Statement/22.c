/*
22. Accept 3 numbers from user using while loop and check each numbers palindrome
*/

#include<stdio.h>

int main(){
	
    int a[3],i,j=0,n,r,k=0;
    
    for(i=0;i<3;i++){
    	printf("Enter Number : ");
        scanf("%d",&a[i]);
	}
	
	for(j=0;j<3;j++){
	    
	    int rn=0;
		n=a[j];
        
        while(n!=0){
            r=n%10;
            rn=rn*10+r;
            n=n/10;
		}
		
        n=a[j];
        
        if(rn==a[j]){
            printf("%d is Palindrome Number.\n",n);
        } else {
            printf("%d is not Palindrome Number.\n",n);
        }

    }
    
    return 0;

}
