/* 
8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading.
*/

#include<iostream>
using namespace std;

class calc{
    
	public:
	
		float sum(float a,float b){
			return a + b;
		}
		
		float sum_min(float c,float d){
			return c - d;
		}
		
		float sum_mul(float e,float f){
			return e * f;
		}
		
		float sum_div(float x,float y){
			return x / y;
		}
};

int main(){
    
	calc a;
	
	cout<<"\n"<<a.sum(20.5,40);
	cout<<"\n"<<a.sum_min(40.5,20);
	cout<<"\n"<<a.sum_mul(20,4);
	cout<<"\n"<<a.sum_div(40,20);
	
	return 0;
	
}