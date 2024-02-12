/* 
37. WAP to show : 
	 i. Monday to sunday using switch case
	ii. Vowel or consonant using switch case
*/

#include<stdio.h>
int main () {
	
	int day;
	char a;
	
	printf("Enter Week Number : ");
	scanf("%d",&day);
	
	switch(day){
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Enter Valid Input....");
	}
	
	printf("Enter Character : ");
	scanf(" %c",&a);
	
	switch(a){
		case 'a':
			printf("Character %c is Vowel.",a);
			break;
		case 'e':
			printf("Character %c is Vowel.",a);
			break;
		case 'i':
			printf("Character %c is Vowel.",a);
			break;
		case 'o':
			printf("Character %c is Vowel.",a);
			break;
		case 'u':
			printf("Character %c is Vowel.",a);
			break;
		default :
			printf("Character %c is Consonant.",a);
			break;
	}
	
	return 0;
	
}
