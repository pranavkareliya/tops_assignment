/*
2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.
*/

#include<iostream>

using namespace std;

class calc{

    private:
        int a,b;

    public:
    calc(){
        cout<<"Enter the value of A : ";
        cin>>a;
        cout<<"Enter the value of B : ";
        cin>>b;
    }

    void add(){
        cout<<"The Addition of A + B is : "<<a+b;
    }

    void sub(){
        cout<<"The Substraction of A - B is : "<<a-b;
    }

    void mul(){
        cout<<"The Multiplication of A * B is : "<<a*b;
    }

    void div(){
        cout<<"The Division of A / B is : "<<a/b;
    }

};

int main () {

    calc obj;

    int choice;

    cout<<"1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n";
    cin>>choice;

    if(choice==1){
        obj.add();
    } else if (choice==2){
        obj.sub();
    } else if (choice==3){
        obj.mul();
    } else if (choice==4){
        obj.div();
    } else {
        cout<<"Enter Valid Input";
    }

    return 0;

}