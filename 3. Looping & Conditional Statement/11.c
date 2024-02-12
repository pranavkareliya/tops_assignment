/*
11. Accept 5 names from user at run time.
*/

#include<stdio.h>

int main(){
	
    char s[5],i;
    
    for(i=1;i<=5;i++){
        printf("Enter Name : ");
        scanf(" %s",&s[i]);
    }

	return 0;

}
