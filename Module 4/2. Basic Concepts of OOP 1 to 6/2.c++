/*
2. Define a class to represent a bank account. Include the following members:
    -Name of the depositor
    -Account Number
    -Type of Account
    -Balance amount in the account

                        Member Functions
    -To assign values
    -To deposited an amount
    -To withdraw an amount after checking balance
    -To display name and balance

*/

#include<iostream>
using namespace std;

class bank_acc{

    private:
        char name[50],type_acc[20];
        int acc_no,bal=0,amt=0,total=0;
    public:
        void get_detail(){
            cout<<"Enter Your Name : ";
            cin>>name;
            cout<<"Enter Your Account Number : ";
            cin>>acc_no;
            cout<<"Enter Your Account Type (S = Saving / C = Current) : ";
            cin>>type_acc;
            cout<<"Enter Your Bank Balance : ";
            cin>>bal;
        }

        void deposit() {
            cout<<"Enter The Amount You want to Deposit : ";
            cin>>amt;
            total=bal+amt;
            cout<<"The Total Amount is : "<<total<<"\n";
        }

        void withdraw(){

            cout<<"Enter The Amount You want to Withdraw : ";
            cin>>amt;

            if(bal>amt){
                total=bal-amt;
                cout<<"The Total Amount is : "<<total<<"\n";
            } else {
                cout<<"You Can't Withdraw money more than Balance";
            }
        }

        void print_data(){
            if(bal>amt){
                cout<<"\nYour Name is "<<name<<" Your Balance Amount is : "<<total;
            } else {
                cout<<"\nYour Name is "<<name<<" Your Balance Amount is : "<<bal;
            }
            
        }

};

int main() {

    bank_acc details;

    char choice;

    details.get_detail();

    cout<<"Press D for Deposit Your Amount OR Press W for Withdraw Your Amount : ";
    cin>>choice;

    if(choice=='d' || choice=='D'){
        details.deposit();
    } else if (choice=='w' || choice=='W'){
       details.withdraw();
    } else {
        cout<<"Enter Valid Input";
    }

    details.print_data();

    return 0;

}