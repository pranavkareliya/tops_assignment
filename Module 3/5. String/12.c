/*
12. Write a program in C to find the number of times a given word 'is' appears in the given string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    char str[30];
    int j,len,times=0;
    
    printf("Enter Sentence : ");
    gets(str);
    
    len=strlen(str);
    
    for(j=0;j<=len-1;j++){
        if ((str[j]=='i' || str[j]=='I') && (str[j+1]=='s' || str[j+1] == 'S')) {
            if (j==len-2 || str[j+2]==' ' || str[j+2]=='\n') {
                times++;
            }
        }
    }
    printf("Frequency of the word 'is' is %d\n",times);
    
    return 0;
    
}
