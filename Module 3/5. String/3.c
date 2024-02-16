/*
3. Write a program in C to print individual characters of a string in reverse order
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char s[50];
    int i,length;
    
    printf("Enter Sentence : ");
    gets(s);
    
    length=strlen(s);
    
    for(i=length;i>=0;i--){
        printf("%c ",s[i]);
    }
    
    return 0;
    
}
