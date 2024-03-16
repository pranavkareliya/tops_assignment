/*
16.Convert country’s name in abbreviate form
*/

#include <stdio.h>

int main() {
	
    char c[30];
    
    printf("Enter Country Name : ");
    scanf("%s",&c);
    
    printf("Abbreviate form of Country is : %c%c",c[0],c[1]); 
    
    return 0; 
}
