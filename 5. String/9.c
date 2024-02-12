/*
9. Write a program in C to find the maximum number of characters in a string.
*/

#include <stdio.h>
#define MAX_SIZE 50

int main(){
    
    int l=0,count=0;
    char str[MAX_SIZE];

    printf("Enter Sentence : ");
    fgets(str, MAX_SIZE, stdin);

    for(l=0; str[l]!='\0'; ++l) {
        if ((str[l] >= 'a' && str[l] <= 'z') || (str[l] >= 'A' && str[l] <= 'Z')) {
            count++;
        }
    }

    printf("\nTotal Counts are : %d",count);

    return 0;
}
