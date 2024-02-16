/*
1. Write a program to find the multiplication values and the cubic values using inline function
*/

#include<iostream>
using namespace std;

class cal{
	
	public:
		int n,mul,cube;
		
	cal(){
		cout<<"Enter the value of N : ";
		cin>>n;
		
		mul=n*n;
		cube=n*n*n;
		
		cout<<"Multiplication value is : "<<mul;
		cout<<"\nCubic value is : "<<cube;
	}
};

int main () {

	cal a;

    return 0;

}
