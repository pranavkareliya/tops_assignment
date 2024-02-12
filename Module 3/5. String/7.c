/*
7. Write a program in C to copy one string to another string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char s1[10],s2[10];
    int i,len;
    
    printf("Enter Sentence : ");
    gets(s1);
    
    len=strlen(s1);
    
    for(i=0;i<len;i++){
        s2[i]=s1[i];
    }
    
    printf("Copy String is : ");
    puts(s2);
    
    return 0;
    
}
