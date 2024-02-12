/*
19-6 Patterns

A
A B C
A B C D
A B C D E

*/

#include <stdio.h>

int main() {
    
    int i,j,a=65;
    
    for(i=1;i<=5;i++){
        for(j=1,a=65;j<=i;j++,a++){
            printf("%c ",a);
        }
        printf("\n");
    }

    return 0;
    
}
