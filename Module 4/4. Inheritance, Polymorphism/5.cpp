/*
5. Assume that the results of a batch of students are stored in three different classes. 
    Class student are storing the roll no. 
    Class Test stores the marks obtained in two subjects and 
    class result conatins the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students(Multilevel Inheritance)
*/

#include <iostream>
using namespace std;

class student{
	
    protected:
    	
        int rollno;
        
    public:
        void get_student(){
            cout<<"Enter Student Roll No : ";
            cin>>rollno;
        }
};

class test : public student{
	
	protected:
		
		float maths,sci,total=0;
		
	public:
		void get_marks(){
			cout<<"Enter Maths Marks : ";
			cin>>maths;
			cout<<"Enter Science Marks : ";
			cin>>sci;
			
			total = maths + sci;
			
			cout<<"Student Roll No is : "<<rollno<<".\tTotal Marks is : "<<total;
		}
    
};

class result: public test{
	
    protected:
    	
    	float total,maths=0,sci=0;
    	
    public:
    
    	void print_data() {
//    		cout<<"Student Roll No is : "<<rollno<<".\tTotal Marks is : "<<total;
		}
    	
};

int main() {
    
    result a;
    
	a.get_student();
	a.get_marks();
	a.print_data();


    return 0;
}
