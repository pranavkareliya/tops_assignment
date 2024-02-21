/*
6. Write a C++ program to show access to private, public and protected using Inheritance
*/

#include<iostream>
using namespace std;

class details{
	
	protected:
		
		int no;
		char name[50];
		
	public:
		
		void get(){
			cout<<"Enter Your Name : ";
			cin>>name;
			cout<<"Enter Your Mobile Number : ";
			cin>>no;
		}
		
		void print(){
			cout<<"Your Name is : "<<name<<".\tAnd Mobile Number is : "<<no;
		}
};

class docs : public details{
	
	public:
		
		int sal;
		
		void get_details(){
			cout<<"\nEnter Your Salary : ";
			cin>>sal;
		}
		
		void print_details(){
			cout<<"\nYour Salary is : "<<sal;
		}
};

int main () {
	
	docs a;
	
	a.get();
	a.get_details();
	a.print();
	a.print_details();
	
	return 0;
	
}
