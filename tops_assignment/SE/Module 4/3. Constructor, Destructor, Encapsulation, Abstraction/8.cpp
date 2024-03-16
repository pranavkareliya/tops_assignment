/*
8. Write a C++ program to implement a class called student that has privae member variable for name, class,
	roll number and marks. Include member function to calculate the grade based on the marks and display the 
	student's information. Accept address from each student implement.
*/

#include<iostream>
using namespace std;

class student{
	private:
		int rollno,marks,class_no;
		char name[100],address[100];
		
	public:
	
		student(){
		    
	    cout<<"Enter Student Name : ";
		cin>>name;
		cout<<"Enter Student class : ";
		cin>>class_no;
		cout<<"Enter Student Roll Number : ";
		cin>>rollno;
		cout<<"Enter Student Marks : ";
		cin>>marks;
		cout<<"Enter Student Home Address : ";
		cin>>address;
			
			if(marks<=100 || marks>80){
				cout<<"Your Grade is A.\n";
			} else if(marks<=80 || marks>60){
				cout<<"Your Grade is B.\n";
			} else if(marks<=60 || marks>50){
				cout<<"Your Grade is C.\n";
			} else if(marks<=50 || marks>=35){
				cout<<"Your Grade is D.\n";
			} else if(marks<35){
				cout<<"Your Grade is F.\n";
			} else if(marks>=101){
			    cout<<"Invalid Marks, Please Input Valid Marks.";
			} 
			else {
				cout<<"Please Enter Only Digits.";
			}
			
			cout<<"Student Name is : "<<name<<"\nStudent Class is : "<<class_no<<"\nStudent Roll No is : "<<rollno<<"\nStudent Marks is : "<<marks;
			
		}
		
};

int main () {
	
	student A;
	
	return 0;
	
}
