/*
16. Accept 5 numbers from user and perform sum of arrays
*/

#include<stdio.h>

int add(int arr[5]);

int main(){
    
    int a[5],i,sum;
    
    for(i=0;i<5;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    
    sum=add(a);
    
    printf("Sum of Array is : %d",sum);
    
    return 0;
}

int add(int arr[5]){
    
    int i,sum=0;
    
    for(i=0;i<5;i++){
        sum=sum+arr[i];
    }
    
    return sum;
}
