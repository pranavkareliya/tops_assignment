/*
2. Write a program in C to separate individual characters from a string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char s[10];
    int i,len;
    
    printf("Enter Sentence : ");
    gets(s);
    
    len=strlen(s);
    
    for(i=0;i<len;i++){
        printf(" %c ",s[i]);
    }
    
    return 0;
    
}
