/*
4. Write a program in C to count the total number of words in a string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char s[50];
    int i,length,m=1;
    
    printf("enter a string:");
    gets(s);
    
    length=strlen(s);
    
    for(i=0;i<length;i++){
        if(s[i]==' '){
            m++;
        }
    }
    
    printf("Total Number of Words are in Sentence : %d",m);
    
    return 0;
}
