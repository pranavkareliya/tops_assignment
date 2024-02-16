/*
5. WAP to take two Array input from user and sort them in ascending or descending order as per user's choice
*/

#include<stdio.h>

void ascending(int a[5]);
void descending(int b[5]);

int main(){
    
    int n[5],i;
    char choice;
    
    for(i=0;i<5;i++){
        printf("Enter Number : ");
        scanf("%d",&n[i]);
    }
    
    printf("\nSelect Ascending order or Descending order : ");
    scanf(" %c",&choice);

    if(choice=='a' || choice=='A'){
        ascending(n);
    }
    else if(choice=='d' || choice=='D'){
        descending(n);
    }
    else{
        printf("\nEnter Valid Input...");
    }
    
    return 0;
    
}

void ascending(int a[5]){
    
    int i,j,temp;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            }
        }
    }
    
    
    for(i=0;i<5;i++){
        printf("\nAscending Order is : ");
        printf("%d ",a[i]);
    }
}

void descending(int b[5]){
    
    int i,j,temp;
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(b[j]<b[j+1]){
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
            }
        }
    }
    
    printf("\nDescending order is : ");
    
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    }
}
