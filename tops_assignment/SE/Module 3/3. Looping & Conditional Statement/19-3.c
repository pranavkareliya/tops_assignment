/*
19-3 Odd Patterns

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

#include <stdio.h>

int main () {
    
  int i,j,m=9;

    for(i=1;i<= m;i++) {
        if(i%2!=0){
            for (j=m-i;j>1;j--){
	            printf(" ");
    	    }
            for (j=1;j<=i;j++){
    	        printf("* ");
    	    }
            printf("\n");
        }
    }
    
    return 0;
    
}
