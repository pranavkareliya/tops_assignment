/*
5. Write a C++ program to create class called Triangle that has private member variable for the lengths of its
	three sides. Implement member function to determine if the triangle is equilateral, isosceles or scalene.
*/

#include<iostream>
using namespace std;

class Triangle{
	
	private:
		float a,b,c;
		
	public:
		void detail(){
			cout<<"Enter The Value of A : ";
			cin>>a;
			cout<<"Enter The Value of B : ";
			cin>>b;
			cout<<"Enter The Value of C : ";
			cin>>c;
			
			if(a==b && b==c && a==c){
				cout<<"This Triangle is Equilateral.";
			} else if(a==b || b==c || a==c){
				cout<<"This Triangle is Isosceles.";
			} else {
				cout<<"This Triangle is Scalene.";
			}
		}
	
};

int main () {
	
	Triangle value;
	
	value.detail();
	
	return 0;
	
}
