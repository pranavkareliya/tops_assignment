/*
7. Write a C++ Program to illustrates the use of constructions in multilevel constructions
*/

#include<iostream>
using namespace std;

class get_detail{
	
	protected:
		
		int rollno;
		char name[50];
		
	public:
		
		get_detail(){
			cout<<"Enter Your Roll No : ";
			cin>>rollno;
			cout<<"Enter Your Name : ";
			cin>>name;
			
			cout<<"Your Name is : "<<name;
		}
};

class get_marks : public get_detail{

	protected:

		int maths,sci,eng,total;

	public:

		get_marks(){
			cout<<"\nEnter Maths Marks : ";
			cin>>maths;
			cout<<"Enter Science Marks : ";
			cin>>sci;
			cout<<"Enter English Marks : ";
			cin>>eng;
			
			total = maths + sci + eng;
			
			cout<<"\nYour total Marks is : "<<total;
		}
};

class choose : public get_marks{
	
	protected:
		char prof[50];
			
	public:
	
	choose(){
		
		cout<<"\nEnter the Profession Field for Your Future : ";
		cin>>prof;
		
		cout<<"\nYou Want to become "<<prof<<" in your Future.";
	}
};

int main () {
	
	choose obj;
	
	return 0;
	
}
