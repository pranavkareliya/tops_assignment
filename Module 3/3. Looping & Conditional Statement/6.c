/* 
6. WAP to print Fibonacci series up to given numbers.
*/

#include<stdio.h>

int main(){
	
	int t1 = 0, t2 = 1, nt, n , i;
	
	printf("Enter Number : ");
	scanf("%d", &n);
	
	printf(" %d  %d ",t1,t2);
	
	for(i = 1; i < n - 1; i++){
		
		if(i <= 1){
			nt = i;
		}else{
			t1 = t2;
			t2 = nt;
			nt = t1 + t2;
		}
		
		printf(" %d ", nt);
	}

	return 0;
	
}

