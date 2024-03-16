/*
6. Write a C++ program to implement a class called Employee that has such private member variables for name,
	employee ID and salary. Include member function to calculate and set salary based on employee performance.
	using of constructor.
*/

#include<iostream>
using namespace std;

class employee{
	
	private:
		int id,bs,gs,inc,rate;
		char name[100],grade;
	
	public:
		
		employee(){
			cout<<"Enter Employee ID : ";
			cin>>id;
			cout<<"Enter Employee Name : ";
			cin>>name;
			cout<<"Enter Employee Salary : ";
			cin>>bs;
		}
		
		void set(){
			
			cout<<"Please Enter Employee Grade (A / B / C) : ";
			cin>>grade;
			
			cout<<"Please Enter Rate for Increment : ";
			cin>>rate;
			
			if(grade=='a' || grade=='A'){
				inc=(bs*rate)/100;
				gs=bs+inc;
				cout<<"Your Next Salary Will be : "<<gs;
			} else if(grade=='b' || grade=='B'){
				inc=bs*(rate/100);
				gs=bs+inc;
				cout<<"Your Next Salary Will be : "<<gs;
			} else if(grade=='c' || grade=='C'){
				inc=bs*(rate/100);
				gs=bs+inc;
				cout<<"Your Next Salary Will be : "<<gs;
			} else {
				cout<<"Invalid Input";
			}
			
		}
};

int main () {
	
	employee a;
	
	a.set();
	
	return 0;
	
}
