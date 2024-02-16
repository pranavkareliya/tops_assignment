/*
8. Write a program in C to count the total number of vowels or consonants in a string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    int i,length,v=0,c=0;
    char s[100];
    
    printf("Enter Sentence : ");
    gets(s);
    
    length=strlen(s);
    
    for(i=0;i<length;i++){
        if((s[i]<=90 && s[i]>=65) || (s[i]<=122 && s[i]>=97)){
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' ||s[i]=='u' || s[i]=='U'){
                v++;
            }
            else{
                c++;
            }
        }
    }
    
    printf("Total Vowels are : %d\nTotal Consonants are : %d",v,c);
    
    return 0;
    
}

