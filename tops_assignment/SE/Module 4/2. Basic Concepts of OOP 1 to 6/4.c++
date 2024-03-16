/*
4. Write a C++ program to implement a class called Circle that has private member variables for radius. Include    member functions to calculate the circle's area and circumference.
*/

#include<iostream>

using namespace std;

class circle{

    private:
        float r,a,c,pie=3.14;
    public:

        void get_value(){
            cout<<"Enter The Value of R : ";
            cin>>r;
        }

        void area(){
            a=pie*r*r;
            cout<<"The Area of Circle is : "<<a<<"\n";
        }

        void circumference() {
            c=2*pie*r;
            cout<<"The Circumferece of Circle is : "<<c<<"\n";
        }

};

int main () {

    circle data;

    data.get_value();

    data.area();

    data.circumference();

    return 0;

}