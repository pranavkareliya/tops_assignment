/*
3. Write a C++ program to create a class called Car that has private member variables for company, model
	and year. Implement member functions to get and set these variables.
*/

#include<iostream>
using namespace std;

class car{

    private:
        char comp[100],model[100];
        int year;

    public:
    	void get(){
    		cout<<"Enter Car Company Name : ";
    		cin>>comp;
    		cout<<"Enter Car Model : ";
    		cin>>model;
    		cout<<"Enter Car Registration Year : ";
    		cin>>year;
		}
		
		void set(){
			
			cout<<"Your Car Company is : "<<comp;
			cout<<"\nYour Car Model is : "<<model;
			cout<<"\nYour Car Registration Year is : "<<year;
		}
        
};

int main () {

	car detail;
	
	detail.get();
	
	detail.set();

    return 0;

}
