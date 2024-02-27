/*
12. Write a program to swap the two numbers using friend function
    without using third variable.
*/

#include<iostream>

using namespace std;

class S{
    
    protected:
    
	    int t,a,b;
	
	public:
	
		S(int a,int b){
			this -> a = a;
			this -> b = b;
		}
		
		friend void swap(S&);
};

void swap(S& s1){
    
	s1.t = s1.a;
	s1.a = s1.b;
	s1.b = s1.t;
	
	cout<<"\nAfter Swap : "<<s1.a<<"\t\t"<<s1.b;
	
}

int main(){
    
	S c(20,40);
	
	swap(c);
	
	return 0;
	
}