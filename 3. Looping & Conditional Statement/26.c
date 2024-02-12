/*
26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
*/

#include<stdio.h>

int main(){
    
    int a,i,sum=0,tsum=0;
    
    printf("Enter Term Number : ");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++){
        tsum=tsum+i;
        sum=sum+tsum;
    }
    
    printf("Total Sum is : %d",sum);
    
    return 0;
    
}
