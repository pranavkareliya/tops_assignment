/*
8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
*/

#include<stdio.h>

int main(){
    
    int n,i,r,g=0;
    
    printf("Enter Number :");
    scanf("%d",&n);
    
    for(i=0;i<5;i++){
        
        r=n%10;
        
        if(g<r){
           g=r;
        }
        n=n/10;
    }

    printf("Maximun Number is : %d",g);
    
}
