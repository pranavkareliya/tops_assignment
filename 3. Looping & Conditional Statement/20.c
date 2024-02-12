/*
20. WAP program to print below output using for loop
	01 02 03 04 05 06 07 08 09 10
	11 12 13 14 15 16 17 18 19 20
	..............
	..............
	41 42 43 44 45 46 47 48 49 50
*/

#include<stdio.h>

int main(){
    
    int i,j,n=1;

    for(i=1;i<=5;i++){
        for(j=1;j<=10;j++){
                if(n<10){
                    printf("0%d ",n);
                }
                else{
                    printf("%d ",n);
                }
            n++;
        }
        printf("\n");
    }
    
    return 0;
    
}
