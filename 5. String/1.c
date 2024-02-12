/*
1. Write a program in C to find the length of a string without using library functions.
*/

#include<stdio.h>

int main(){
    
    char s[10];
    int i,l=0;
    
    printf("Enter Sentence : ");
    gets(s);
    
    for(i=0;s[i]!='\0';i++){
        l++;
    }
    
    printf("Sentence length is : %d",l);
    
    return 0;
    
}
