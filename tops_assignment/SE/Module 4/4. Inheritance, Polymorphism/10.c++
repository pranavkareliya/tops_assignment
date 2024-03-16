/*
10.Write a program to concatenate the two strings using Operator Overloading.
*/

#include<iostream>
#include<string.h>

using namespace std;

class AddString {

	public:
	
		char s1[50],s2[50];
	
		AddString(char s1[], char s2[]) {
			strcpy(this->s1,s1);
			strcpy(this->s2,s2);
		}
	
		void operator+() {
		    
			cout<<"\nNew Sentence : "<<strcat(s1,s2);
		}
};

int main() {
    
    char s1[] = "Hello,";
	char s2[] = " Nice to meet you";

	AddString a(s1, s2);

	+a;
	
	return 0;
	
}