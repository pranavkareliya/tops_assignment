/* 15. Write a C program to determine eligibility for admission to a profesional course based on the following data :
Eligibility Criteria : 
Marks in maths >=65 
Marks in phy >=55
Marks in chem >=50 and 
Total in all three subjects >=190 or Total in Maths and phy >=140.

INPUT MARKS OBTAINED IN 
phy = 65
chem = 51
maths = 72
total of phy + chem + maths = 188.

Total marks of maths and physics : 137.
The Candidate is not eligible.
*/

#include<stdio.h>

int main (){
	
	int maths,phy,chem,total,maths_phy;
	
	printf("Enter the marks of Maths : ");
	scanf("%d",&maths);
	
	printf("Enter the marks of Physics : ");
	scanf("%d",&phy);
	
	printf("Enter the marks of Chemistry : ");
	scanf("%d",&chem);
	
	total = maths + phy + chem;
	maths_phy = maths + phy;
	
	if(maths>=65 && phy>=55 && chem>=50 && total>=190 && maths_phy>=140){
		printf("Your Total Marks is : %d And Total in Maths + Physics is %d + %d = %d. So You are Eligible for Admission.",total,maths,phy,maths_phy);
	} else {
		printf("Your Total Marks is : %d And Total in Maths + Physics is %d + %d = %d. So You are Not Eligible for Admission.",total,maths,phy,maths_phy);
	}
	
	return 0;
	
}
