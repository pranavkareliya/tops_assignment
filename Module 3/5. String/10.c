/*
10. Write a program in C to extract a substring from a given string
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char s[10];
    int i,l,len,n;
    
    printf("Enter Sentence : ");
    gets(s);
    
    printf("\nEnter Starting Position : ");
    scanf("%d",&n);
    
    printf("\nEnter lentgh of Subsentence : ");
    scanf("%d",&l);
    
    len=strlen(s);
    
    if(l>len){
        printf("\nSubstring greater than actual string");
    } else{
        printf("\nSubstring is : ");
        for(i=n;i<l+n;i++){
            printf("%c",s[i]);
        }
    }
    
    return 0;
    
}
