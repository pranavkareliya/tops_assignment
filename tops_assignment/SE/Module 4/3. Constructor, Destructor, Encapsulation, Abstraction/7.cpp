/*
7. Write a C++ program to implement a class called Date that has private member variables for day, month and
	year. Include member functions to set and get these variables as well as to validate if the date is valid.
*/

#include<iostream>
using namespace std;

class Date{
	
	private:
		int day,month,year;
	public:
		void get() {
			cout<<"Enter Day : ";
			cin>>day;
			cout<<"Enter Month : ";
			cin>>month;
			cout<<"Enter Year : ";
			cin>>year;
		}
		
		if(day>=1 || day<=31){
			
		}
	
};

int main () {
	
	
	
	return 0;
	
}
