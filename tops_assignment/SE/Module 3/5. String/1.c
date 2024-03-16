/*
1. Write a program in C to find the length of a string without using library functions.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char s[50];
    int i,count=0;
    
    printf("Enter Sentence : ");
    gets(s);
    
    for(i=0;s[i]!='\0';i++){
        count++;
    }
    
    printf("The length of Sentence is : %d",count);
    
    return 0;
    
}
