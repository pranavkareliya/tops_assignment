/*
3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/

#include <stdio.h>

int main() {
	
    int n[10],i,ec=0,oc=0,es=0,os=0;
    
    for(i=0;i<10;i++){
        printf("Enter value : ");
        scanf("%d",&n[i]);
        
        if(n[i]%2==0){
            ec++;
            es+=n[i];
        }else{
            oc++;
            os+=n[i];
        }
    }
    
    printf("There are %d Even Numbers.\n",ec);
    printf("There are %d Odd Numbers.\n",oc);
    printf("Sum of Even numbers is : %d\n",es);
    printf("Sum of Odd numbers is : %d\n",os);
    
    return 0; 
}
