/*
7. Write a program in C to copy one string to another string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    int i,length;
    char s1[50],s2[50];
    
    printf("Enter Sentence : ");
    gets(s1);
    
    length=strlen(s1);
    
    for(i=0;i<length;i++){
        s2[i]=s1[i];
    }
    
    printf("Copy String is : ");
    puts(s2);
    
    return 0;
    
}
