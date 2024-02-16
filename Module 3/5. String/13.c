/* 
13.Write a program in C to remove characters from a string except alphabets.
*/

#include<stdio.h>
#include<string.h>

int main(){
	
    int l;
    char s[50];

    printf("Enter Sentence : ");
    gets(s);

    for(l=0; s[l]!='\0'; l++) {

        if ((s[l] >= 'a' && s[l] <= 'z') || (s[l] >= 'A' && s[l] <= 'Z')) {
            continue;
        } else{
            s[l]=' ';
        }
    }
    
    printf("%s",s);
    
    return 0;
}
