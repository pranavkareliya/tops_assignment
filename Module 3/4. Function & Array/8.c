/*
8. WAP to check that the string is palindrome or not
*/

void chek(char *,int);

#include <stdio.h>

int main(){
    
    char s[50];
    int l,i,j;
    
    printf("Enter Sentence : ");
    scanf("%s",&s);
    
    for (l = 0; s[l] != '\0'; ++l);
    
    chek(s,l);
    
    return 0;
}

void chek(char s[50],int l){
    
    int i,j,m=1;
    
        for(i=0,j=l-1;i<=(l/2)-1;i++,j--){
        if(s[i]==s[j]){
            continue;
        }else{
            m = 0;
        }
        }
    if(m==0){
        printf("Sentence is Not Palindrome.");
    }else{
        printf("Sentence is Palindrome.");
    }
}
