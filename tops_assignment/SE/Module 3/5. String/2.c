/*
2. Write a program in C to separate individual characters from a string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char s[50];
    int i,length;
    
    printf("Enter Sentence : ");
    gets(s);
    
    length=strlen(s);
    
    for(i=0;i<length;i++){
        printf(" %c ",s[i]);
    }
    
    return 0;
    
}
