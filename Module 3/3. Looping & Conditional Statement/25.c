/*
25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
*/

#include<stdio.h>

int main(){
    
    int n,i,sum=0;
    
    printf("Enter Term Number : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        sum=sum+i*i;
    }
    
    printf("Total Sum is : %d",sum);
    
    return 0;
    
}
