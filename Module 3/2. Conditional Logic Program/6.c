/* 6. Find the Character is Vowel or not */

#include <stdio.h>

int main() {
    
    char a;
    
    printf("Enter Character : ");
    scanf(" %c",&a);
    
    if(a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U'){
        printf("This Character is Vowel.");
    } else {
        printf("This Character is not Vowel");
    }

    return 0;
}
