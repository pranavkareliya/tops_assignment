/*
7. WAP Find out length of string using without inbulit function
*/

#include<stdio.h>

int main () {
	
    int a,count=0;
    char n[50],m[50];
    
    printf("Enter Sentence : ");
    scanf("%s",&n);
    
    while(n[count] != '\0'){
        count++;
        a=count-1;
    }
    
    printf("The length of Sentence is : %d",count);
    
    return 0;
	
}
