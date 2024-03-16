/*
5. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.
*/

#include<iostream>

using namespace std;

class rectangle{

    private:
        float a,w,l,p;
    public:
        get_value(){
            cout<<"Enter the value of Width / W : ";
            cin>>w;
            cout<<"Enter the value of Length / L : ";
            cin>>l;
        }

        area() {
            a=w*l;
            cout<<"The Area of Rectangle is : "<<a<<"\n";
        }

        perimeter(){
            p=2*(w+l);
            cout<<"The Perimeter of Rectangle is : "<<p<<"\n";
        }

};

int main () {

    rectangle data;

    data.get_value();

    data.area();

    data.perimeter();

    return 0;

}