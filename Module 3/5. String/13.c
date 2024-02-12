/* 
13.Write a program in C to remove characters from a string except alphabets.
*/

#include <stdio.h>
#define MAX_SIZE 50

int main(){
	
    int l;
    char str[MAX_SIZE];

    printf("Enter Sentence : ");
    scanf("%[^\n]%*c",str);

    for(l=0; str[l]!='\0'; ++l) {

        if ((str[l] >= 'a' && str[l] <= 'z') || (str[l] >= 'A' && str[l] <= 'Z')) {
            continue;
        } else{
            str[l]=' ';
        }
    }
    
    printf("%s",str);
    
    return 0;
}
