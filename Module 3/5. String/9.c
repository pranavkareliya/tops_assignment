/*
9. Write a program in C to find the maximum number of characters in a string.
*/

#include<stdio.h>
#include<string.h>

int main(){
    
    int l=0,count=0;
    char str[50];

    printf("Enter Sentence : ");
    gets(str);

    for(l=0; str[l]!='\0'; ++l) {
        if ((str[l] >= 'a' && str[l] <= 'z') || (str[l] >= 'A' && str[l] <= 'Z')) {
            count++;
        }
    }

    printf("\nTotal Counts are : %d",count);

    return 0;
}
