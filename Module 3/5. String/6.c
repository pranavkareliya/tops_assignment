/*
6. Write a program in C to count the total number of alphabets, digits and special characters in a string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    int i,length,a=0,b=0,c=0;
    char s[100];
    
    printf("Enter Sentence : ");
    gets(s);
    
    length=strlen(s);
    
    for(i=0;i<length;i++){
        if(s[i]<=90 && s[i]>=65){
            a++;
        } else if(s[i]<=122 && s[i]>=97){
            a++;
        } else if(s[i]<=57 && s[i]>=48){
            b++;
        } else{
            c++;
        }
    }
    printf("Total Alphabets are : %d\n Total Digits are : %d\n Total Special Characters are : %d",a,b,c);
    
    return 0;
    
}
