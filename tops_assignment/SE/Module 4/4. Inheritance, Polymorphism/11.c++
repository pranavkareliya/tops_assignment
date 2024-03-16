/*
11. Write a program to calculate the area of circle, rectangle and triangle
    using Function Overloading
        Rectangle: Area * breadth
        Triangle: 1/2 * Area * breadth
        Circle: Pi * Area * Area.
*/

#include<iostream>

using namespace std;

class cal{
    
	public:
	
		float area(float a,float b){
			return a * b;
		}
		
		float barea(float a,float b){
			return (a * b)/2;
		}
		
		float area(float r){
			return 3.14 * r * r;
		}
};

int main(){
    
	cal a;
	
	cout<<"\n Area of Circle is : "<<a.area(10);
	cout<<"\n Area of Rectangle is : "<<a.area(20,40);
	cout<<"\n Area of Triangle is : "<<a.barea(40,20);
	
	return 0;
	
}