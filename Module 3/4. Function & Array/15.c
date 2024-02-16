/*
15. Store 5 numbers in array and sort it in ascending order
*/

#include<stdio.h>

void ascending(int asc[5]);

int main(){
    
    int a[5],i;
    
    for(i=0;i<5;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    
    ascending(a);
    
    return 0;
    
}

void ascending(int asc[5]){
    
    int i,j,t;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(asc[j]>asc[j+1]){
            t=asc[j];
            asc[j]=asc[j+1];
            asc[j+1]=t;
            }
        }
    }
    
    for(i=0;i<5;i++){
        printf("\nAscending Array is : ");
        printf("%d ",asc[i]);
    }
}


