/* 19. Calculate compound Interest */

#include<stdio.h>
#include<math.h>

int main() {
    
    float a,p,r,n,t,r1,CI;
	
	printf("Enter Principle Amount : ");
	scanf("%f",&p);
	
	printf("Enter the Rate of Interest : ");
	scanf("%f",&r);
	
	printf("Enter the number of years : ");
	scanf("%f",&n); 
    
    a = p * ((pow((1 + r / 100),n)));
    
    CI = a - p;
    
    printf("Compound Interest : %f",CI);

    return 0;
}
