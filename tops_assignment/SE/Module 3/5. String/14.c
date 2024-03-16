/* 
14. Write a program in C to combine two strings manually
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    int i,j;
    char s1[50],s2[50];

    printf("Enter Sentence 1 : ");
    gets(s1);
    printf("Enter Sentence 2 : ");
    gets(s2);

    for(j=0; s1[j]!='\0'; j++);
    
    for(i=0; s2[i]!='\0'; i++){
        s1[j]=s2[i];
        j++;
    }

    printf("Combined Sentence is : %s",s1);

    return 0;
    
}
