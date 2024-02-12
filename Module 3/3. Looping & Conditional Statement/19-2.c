/*
19-2 Patterns

A
B C
D E F 
G H I J
K L M N O

*/

#include <stdio.h>

int main() {
    int i,j,a=65,c=4;
    
    
    for(i=1;i<=c;i++){
        for(j=1;j<=i;j++,a++){
            printf("%c ",a);
        }
        printf("\n");
    }
    
    return 0;
    
}
