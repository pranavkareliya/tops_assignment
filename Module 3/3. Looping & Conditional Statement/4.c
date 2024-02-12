/* 
4 WAP to print table up to given numbers
*/
#include <stdio.h>

int main() {
    
    int a,b,m;
    
    printf("Give num for table ");
    scanf("%d",&a);
    
        for(b=1;b<=a;b++){
            for(m=1;m<11;m++){
                printf("%d * %d = %d\n",b,m,b*m);
            }
            printf("\n");
        }

    return 0;
}
