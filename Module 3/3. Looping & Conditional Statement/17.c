/*
17. Calculate 5 numbers from user and calculate number of even and odd using of while loop
*/

#include<stdio.h>

int main(){
    
    int n[5],a=0,b=0;
    
    while(a<5){
        printf("Enter Number : ");
        scanf("%d",&n[a]);
        a++;
    }
    
    while(b<5){
        if(n[b]%2==0){
            printf("%d Number is Even.\n",n[b]);
        }
        else{
            printf("%d Number is Odd.\n",n[b]);
        }
        b++;
    }
    
    return 0;
    
}
