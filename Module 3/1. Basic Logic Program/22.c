/* 22. Calculate compound interest :-
	a. Formula to calculate compund intereser annully is given by :-
		Amount = P (1 + R/100)t.
	b. Compound Interest = Amount - P . 
*/
	
#include <stdio.h> 

int main() {
    
    float a,p,r,n,t,r1,CI;
	
	printf("Enter Principle Amount : ");
	scanf("%f",&p);
	
	printf("Enter the Rate of Interest : ");
	scanf("%f",&r);
	
	printf("Enter the number of years : ");
	scanf("%f",&n);
    
    a = p * ((pow((1 + r / 100),n)));
    
    printf("The Total Amount is : %f",a);
    
    CI = a - p;
    
    printf("\nCompound Interest = %f - %f = %f",a,p,CI);

    return 0;
}
