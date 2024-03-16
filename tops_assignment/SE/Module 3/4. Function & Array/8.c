/*
8. WAP to check that the string is palindrome or not
*/

#include <stdio.h>
#include <string.h>

void palindrome();

int main() {

    palindrome();

    return 0;
}

void palindrome(){
    
    char s[50],i,length,m = 0;
    
    printf("Enter Sentence : ");
    scanf("%s",s);
    
    length = strlen(s);

    for (i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
            m = 1;
            break;
        }
    }

    if (m) {
        printf("%s Sentence is not a Palindrome.\n", s);
    } else {
        printf("%s Sentence is a Palindrome.\n", s);
    }
    
}
