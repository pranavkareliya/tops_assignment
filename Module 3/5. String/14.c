/* 
14. Write a program in C to combine two strings manually
*/

#include <stdio.h>
#define MAX_SIZE 50

int main(){
    
    int i,l;
    char str1[MAX_SIZE],str2[MAX_SIZE];

    printf("Enter Sentence 1 : ");
    scanf("%[^\n]%*c",str1);
    printf("Enter Sentence 2 : ");
    scanf("%[^\n]%*c",str2);

    for(l=0; str1[l]!='\0'; ++l);
    for(i=0; str2[i]!='\0'; ++i){
        str1[l]=str2[i];
        ++l;
    }
    printf("Combined Sentence is : %s",str1);

    return 0;
    
}
