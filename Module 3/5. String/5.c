/*
5. Write a program in C to compare two strings without using string library functions.
*/

#include<stdio.h>

int main(){
	
    int i,f=0,l=0,m=0;
    char s1[50],s2[50];
    
    printf("Enter First Sentence : ");
    gets(s1);
    printf("Enter Second Sentence : ");
    gets(s2);
    
    for(i=0;s1[i]!='\0';i++){
        l++;
    }
    for(i=0;s2[i]!='\0';i++){
        m++;
    }
    for(i=0;l>m?i<l:i<m;i++){
        if(s1[i]!=s2[i]){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("Both Sentence are Different.");
    }
    else{
        printf("Both Sentence are Same.");
    }
    
    return 0;
    
}
