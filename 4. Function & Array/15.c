/*
15. Store 5 numbers in array and sort it in ascending order
*/

#include<stdio.h>

void ascending(int arr1[5]);

int main(){
    
    int a[5],i;
    
    for(i=0;i<5;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    
    ascending(a);
    
    return 0;
    
}

void ascending(int arr1[5]){
    
    int i,j,temp;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(arr1[j]>arr1[j+1]){
            temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
            }
        }
    }
    
    for(i=0;i<5;i++){
        printf("\nAscending Array is : ");
        printf("%d ",arr1[i]);
    }
}


