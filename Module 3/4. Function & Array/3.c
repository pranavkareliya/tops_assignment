/*
3. WAP to find reverse of string using recursion
*/

#include <stdio.h>

void rev(char[],int);
int main() {
	
    int length;
    char s[20];
    
    printf("Enter Name : ");
    gets(s);
    
    for (length=0;s[length]!='\0';length++);
    
    rev(s,length);
    
    return 0;
}

void rev(char s[20],int length){
    if(length >= 0){
        printf("%c",s[length]);
        length--;
        rev(s,length);
    }else{
        return;
    }
}
