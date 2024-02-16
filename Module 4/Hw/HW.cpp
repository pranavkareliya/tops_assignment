/*
							H.W.:-
*/

#include<iostream>
#include<math.h>
using namespace std;

class value{
	protected:
		int n;
	public:
	
		void get_value(int num){
			n=num;
		}	
};

class square:public value{
	public:
		int sq;
		void sqs(){
			sq=n*n;
			cout<<"The Square of N is : "<<sq;
		}
};

class cubes:public value{
	public:
		int cube;
		void cub(){
			cube=n*n*n;
			cout<<"\nThe Cube of N is : "<<cube;
		}
};

class powers:public value{
	public:
		int p,q;
		void power(){
			cout<<"\nEnter Power : ";
			cin>>p;
			q=pow(n,p);
			cout<<"\nThe power of N is : "<<q;
		}
		
};

int main () {
	int n;
	
	value a;
	square b;
	cubes c;
	powers d;
	
	cout<<"Enter the value of N : ";
	cin>>n;
	
	a.get_value(n);
	b.get_value(n);
	b.sqs();
	c.get_value(n);
	c.cub();
	d.get_value(n);
	d.power();
	
	return 0;
	
}
