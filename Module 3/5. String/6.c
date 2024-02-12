/*
6. Write a program in C to count the total number of alphabets, digits and special characters in a string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char s[100];
    int i,len,a=0,d=0,sc=0;
    
    printf("enter a string:");
    gets(s);
    
    len=strlen(s);
    
    for(i=0;i<len;i++){
        if(s[i]<=90 && s[i]>=65){
            a++;
        } else if(s[i]<=122 && s[i]>=97){
            a++;
        } else if(s[i]<=57 && s[i]>=48){
            d++;
        } else{
            sc++;
        }
    }
    printf("Total Alphabets are : %d\n Total Digits are : %d\n Total Special Characters are : %d",a,d,sc);
    
    return 0;
    
}
