/*
10. Write a program in C to extract a substring from a given string
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    int i,j,length,n;
    char s[50];
    
    printf("Enter Sentence : ");
    gets(s);
    
    printf("\nEnter Starting Position : ");
    scanf("%d",&n);
    
    printf("\nEnter lentgh of Subsentence : ");
    scanf("%d",&j);
    
    length=strlen(s);
    
    if(j>length){
        printf("\nSubstring greater than actual string.");
    } else{
        printf("\nSubstring is : ");
        for(i=n;i<j+n;i++){
            printf("%c",s[i]);
        }
    }
    
    return 0;
    
}
