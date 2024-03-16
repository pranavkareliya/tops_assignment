/*
1. Write a program of to swap the two values using template
*/

#include <iostream> 

using namespace std;

template <class T> 

int swap_numbers(T& x, T& y) { 
    
	T t; 
	t = x; 
	x = y; 
	y = t; 
	
} 

int main() { 
    
	int a, b; 
	cout<<"Enter the value of A : ";
	cin>>a;
	cout<<"Enter the value of B : ";
	cin>>b;
	
	swap_numbers(a, b); 
	
	cout <<"After Swap "<<"A : "<< a << "\t" <<"B : "<< b << endl; 
	
	return 0; 
	
}