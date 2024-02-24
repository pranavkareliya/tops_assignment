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
				cout<<"\nRound NO : "<<i+1<<" / "<<round<<endl<<endl<<endl;
				
				cout<<name<<" Score : "<<ps<<endl<<endl;
				
				cout<<"CPU Score : "<<cs<<endl<<endl;
				
				cout<<"\n1) Rock \n\n2) Paper \n\n3) Scissor\n\n\n";
				
				cout<<"Enter Your Choice : ";
				cin>>choice;
				
				c_choice = rand() %3+1;
				
				if(c_choice==1){
					cout<<"/nCPU choose : Rock - 1"<<endl<<endl;
				} else if(c_choice==2){
					cout<<"\nCPU choose : Paper - 2"<<endl<<endl;
				} else {
					cout<<"\nCPU choose : Scissor - 3"<<endl<<endl;
				}
				
				if(choice==c_choice){
					cout<<"It's a Tie."<<endl<<endl;
				} else if(choice==1){
					if(c_choice==2){
						cout<<"You Lose."<<endl<<endl;
						cs++;
					}
					if(c_choice==3){
						cout<<"You Win."<<endl<<endl;
						ps++;
					}
				} else if (choice==2){
					if(c_choice==1){
						cout<<"You Win."<<endl<<endl;
						ps++;
					}
					if(c_choice==3){
						cout<<"You Lose."<<endl<<endl;
						cs++;
					}
				} else if(choice==3){
					if(c_choice==1){
						if(c_choice==1){
							cout<<"You Lose."<<endl<<endl;
							cs++;
						}
						if(c_choice==2){
							cout<<"You Win."<<endl<<endl;
							ps++;
						}
					}
				}
				
			}
			
			
				//final score:-
				
				cout<<name<<" Final Score is : "<<ps<<endl<<endl;
				
				cout<<"CPU Final Score is : "<<cs<<endl<<endl;
				
				if(ps>cs){
					cout<<"Congratulations..!! You Win."<<endl;
				} else if(ps==cs){
					cout<<"Game is Tie..."<<endl;
				} else {
					cout<<"Sorrryyy..! You Lose"<<endl;
				}
			
		}
	
};

using namespace std;

int main () {
	
	game a;
	
	return 0;
	
}
