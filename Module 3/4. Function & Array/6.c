/*
6. WAP to make addition, substraction and multiplication of two matrix using 2-D Array
*/

#include<stdio.h>

int main () {
	
	int i,j,a[3][3],b[3][3],c[3][3],choice,sum=0,sub=0,mul=1;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter Number of A : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");

	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter Number of B : ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	
	printf("\n1.Addition\n2.Substraction\n3.Multiplication\n");
	scanf("%d",&choice);
	
	if(choice==1){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				c[i][j]=a[i][j]+b[i][j];
				printf(" %d ",c[i][j]);
			}
			printf("\n");
		}
	} else if(choice==2){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				c[i][j]=a[i][j]-b[i][j];
				printf(" %d ",c[i][j]);
			}
			printf("\n");
		}
		
	} else if(choice==3){
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				c[i][j]=a[i][j]/b[i][j];
				printf(" %d ",c[i][j]);
			}
			printf("\n");
		}
	} else {
		printf("Enter Valid Input...");
	}
	
	return 0;
	
}
