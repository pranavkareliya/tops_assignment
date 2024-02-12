/*
19-4 Patterns

*
* *
* * *
* * * *
* * * * * 
* * * * * *
* * * * *
* * * *
* * *
* * 
*

*/
#include <stdio.h>

int main (){
    
    int i,j,r=10;

    if(r%2==0){
        r++;
    }
    
    for(i=1;i<=r/2;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=r/2-1;i>0;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
    
}
