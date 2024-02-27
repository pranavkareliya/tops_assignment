/*
13. Write a program to find the max number from given two numbers
using friend function.
*/

#include<iostream>

using namespace std;

class Max{
    
	private:
	
		int a,b;
		
	public:
	
		void get_data(){
			cout<<"\nEnter First Number : ";
			cin>>a;
			cout<<"Enter Second Number : ";
			cin>>b;
		}
		
		friend void find(Max t);
};

void find(Max t){
    
	if(t.a > t.b){
		cout<<"\nLargest Number is : "<<t.a;
	}else{
		cout<<"\nLargest Number is : "<<t.b;
	}
}

int main(){
    
	Max t;
	
	t.get_data();
	find(t);
	
	return 0;
	
}