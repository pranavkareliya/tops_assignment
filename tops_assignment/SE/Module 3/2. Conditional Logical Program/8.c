/* 
8. WAP to accept the height of a person in centimeters and categorize the person according to their height 
*/

#include <stdio.h>

int main() {
    
    float a;
	
	printf("Enter Your Height in Centimeters : ");
	scanf("%f",&a);
	
	if(a>=182.88 && a<= 213.36){
	    printf("Your Height category is A.");
	} else if(a>=152.4 && a<=182.88){
	    printf("Your Height category is B.");
	} else if(a>=121.92  && a<=152.4){
	    printf("Your Height category is C.");
	} else if(a>=91.44 && a<=121.92){
	    printf("Your Height category is D.");
	}  else {
	    printf("Your Height category is E.");
	}

    return 0;
}
