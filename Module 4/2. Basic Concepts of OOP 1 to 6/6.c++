/*
6. Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.
*/

#include<iostream>

using namespace std;

class person{

    private:
        int age;
        char name[100],country[100];

    public:

        void get_value(){
            cout<<"Enter Your Name : ";
            cin>>name;
            cout<<"Enter Your Age : ";
            cin>>age;
            cout<<"Enter Your Country : ";
            cin>>country;
        }

        void print_value(){

            cout<<"Your Name is : "<<name<<"\nYour Age is : "<<age<<"\nYour Country is : "<<country;

        }

};

int main () {
    
    person obj;

    obj.get_value();

    obj.print_value();

    return 0;

}