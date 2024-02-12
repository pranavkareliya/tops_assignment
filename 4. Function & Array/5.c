/*
5. WAP to take two Array input from user and sort them in ascending or descending order as per user's choice
*/

#include<stdio.h>

void ascending(int arr1[5]);
void descending(int arr2[5]);

int main(){
    
    int a[5],i;
    char choice;
    
    for(i=0;i<5;i++){
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    
    printf("\nSelect Ascending order or Descending order : ");
    scanf(" %c",&choice);

    if(choice=='a' || choice=='A'){
        ascending(a);
    }
    else if(choice=='d' || choice=='D'){
        descending(a);
    }
    else{
        printf("\nEnter Valid Input...");
    }
    
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
        printf("\nAscending Order is : ");
        printf("%d ",arr1[i]);
    }
}

void descending(int arr2[5]){
    
    int i,j,temp;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(arr2[j]<arr2[j+1]){
            temp=arr2[j];
            arr2[j]=arr2[j+1];
            arr2[j+1]=temp;
            }
        }
    }
    
    printf("\nDescending order is : ");
    
    for(i=0;i<5;i++){
        printf("%d ",arr2[i]);
    }
}
