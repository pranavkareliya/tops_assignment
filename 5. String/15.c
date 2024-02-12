/*
15. Write a program in C to find the largest and smallest words in a string.
*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[50],words[50][50], small[50], large[50];
    
    int i=0,j=0,k,length;
    
    printf("Enter Sentence : ");
    gets(str);

    for(k=0;str[k]!='\0'; k++){
        if(str[k]!=' ' && str[k]!='\0'){
            words[i][j++]=str[k];
        }
        else{
            words[i][j]='\0';
            i++;
            j = 0;
        }
    }
    length=i+1;
    strcpy(small, words[0]);
    strcpy(large, words[0]);
    for(k=0;k<length;k++){
        if(strlen(small) > strlen(words[k])){
            strcpy(small, words[k]);
        }
        if(strlen(large) < strlen(words[k]))
            strcpy(large, words[k]);
    }

    printf("Smallest word is : %s\n",small);
    printf("Largest words is: %s",large);
    
    return 0;
    
}
