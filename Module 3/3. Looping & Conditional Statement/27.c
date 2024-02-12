/*
27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n
*/

#include<stdio.h>

int main(){
    
    int a,i;
    float sum=0,ts;

    printf("Enter Term Number : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        ts=(float)i/(i+1);

        if(i%2==0){
            sum=sum-ts;
        }
        else{
            sum=sum+ts;
        }
    }
    
    printf("sum:%f",sum);

    return 0;

}
