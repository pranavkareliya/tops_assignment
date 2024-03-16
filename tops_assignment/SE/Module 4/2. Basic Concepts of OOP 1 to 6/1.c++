/*
1. WAP to create simple calculator using class
*/

#include<iostream>

using namespace std;

class calc{

    private:
        int a,b;
    public:
        void get_value(){
            cout<<"Enter the value of A : ";
            cin>>a;
            cout<<"Enter the value of B : ";
            cin>>b;
        }

        void sum() {
            cout<<"The Addition of A + B is : "<<a+b;
        }

        void sub() {
            cout<<"The Substraction of A - B is : "<<a-b;
        }

        void mul() {
            cout<<"The Multlipaction of A * B is : "<<a*b;
        }

        void div() {
            cout<<"The division of A / B is : "<<a/b;
        }

};


int main () {

    calc cal;

    int choice;

    cal.get_value();

    cout<<"1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n";
    cout<<"Enter Your Choice : ";
    cin>>choice;

    if(choice==1){
        cal.sum();
    } else if (choice==2){
        cal.sub();
    } else if (choice==3){
        cal.mul();
    } else if(choice==4){
        cal.div();
    } else {
        cout<<"Please Enter Valid Input";
    }

    return 0;

}