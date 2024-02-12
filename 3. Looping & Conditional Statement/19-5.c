/*
19-5 Patterns

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

#include <stdio.h>

int main (){
    
    int i,j,r=5,num=1;
    
    for(i=0;i<=r;i++){
        for(j=0;j<i;j++,num++){
            printf("%d ",num);
        }
        printf("\n");
    }
    
    return 0;
    
}
