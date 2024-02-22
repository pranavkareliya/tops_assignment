/*
									ASSESSMENT OF OOP 
							MAKING STONE PAPER SCISSOR GAME IN C++
*/

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

class game{
	
	protected:
		
		int i,ps=0,cs=0,c_choice,tie,round,choice;
		char name[50];
		
	public:
		
		game(){
			
			cout<<"\n\t\t\t\tWelcome to Stone - Paper - Scissor Game";
			
			cout<<"\nEnter Your Name : ";
			cin>>name;
			cout<<"\n"<<name<<" How Many rounds you want to play ? : ";
			cin>>round;
			
			for(i=0;i<round;i++){
				cout<<"\nRound NO : "<<i+1<<" / "<<round<<endl;
				
				cout<<"\n1) Rock \n2) Paper \n3) Scissor\n\n";
				
				cout<<"Enter Your Choice : ";
				cin>>choice;
				
				cs = rand() %3+1;
				
				cout<<"CPU choose : ";
				
				if(c_choice==1){
					cout<<"/nCPU choose Rock";
				} else if(c_choice==2){
					cout<<"\nCPU choose Paper";
				} else {
					cout<<"\nCPU choose Scissor";
				}
				
				if(choice==c_choice){
					cout<<"It's a Tie.";
				}
				
			}
			
		}
	
};

using namespace std;

int main () {
	
	game a;
	
	return 0;
	
}
