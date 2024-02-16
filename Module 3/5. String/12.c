/*
12. Write a program in C to find the number of times a given word 'is' appears in the given string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char s[50];
    int i,length,times=0;
    
    printf("Enter Sentence : ");
    gets(s);
    
    length=strlen(s);
    
    for(i=0;i<=length;i++){
        if ((s[i]=='i' || s[i]=='I') && (s[i+1]=='s' || s[i+1] == 'S')) {
            if (i==length-2 || s[i+2]==' ' || s[i+2]=='\n') {
                times++;
            }
        }
    }
    printf("Frequency of the word 'is' is %d\n",times);
    
    return 0;
    
}
