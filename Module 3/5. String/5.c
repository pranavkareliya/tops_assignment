/*
5. Write a program in C to compare two strings without using string library functions.
*/

#include<stdio.h>

int main(){
	
    char s1[10],s2[10];
    int i,f=0,l1=0,l2=0;
    
    printf("Enter First Sentence : ");
    gets(s1);
    printf("Enter Second Sentence : ");
    gets(s2);
    
    for(i=0;s1[i]!='\0';i++){
        l1++;
    }
    for(i=0;s2[i]!='\0';i++){
        l2++;
    }
    for(i=0;l1>l2?i<l1:i<l2;i++){
        if(s1[i]!=s2[i]){
            flag=1;
            break;
        }
    }
    if(fl==1){
        printf("Both Sentence are Different.");
    }
    else{
        printf("Both Sentence are Same.");
    }
    
    return 0;
    
}
