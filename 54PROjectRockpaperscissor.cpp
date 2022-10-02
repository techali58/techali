#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class game
{
	string name;
	int rounds,choice,a,score=0,cscore=0,s=0,c=0;
	public:
		void design()
		{
			for(int i=0;i<10;i++)
			{
				cout<<"*--";
			
			}
		}
		void Name()
		{
			design();
			cout<<"\n \t  NAME\n";
			design();
			cout<<"\nEnter your name: ";
			cin>>name;
		}
		void Rounds()
		{
			design();
			cout<<"\n \t  ROUNDS\n";
			design();
			cout<<"\n"<<name<<" how many rounds you want to play? : ";
			cin>>rounds;
		}
		void Game()
		{
			design();
			cout<<"\n \t  GAME\n";
			design();
			for(int i=1;i<=rounds;i++)
		 {
			cout<<"\nRound No:"<<i<<"/"<<rounds;
			score=0,cscore=0;
			cout<<"\n-* "<<name<<" Score = "<<s;
			cout<<"\n-* Computer Score = "<<c;
			cout<<"\n\n1)Rock\n2)Paper\n3)Scissor\n\n";
			cout<<"-> Select your choice : ";
			cin>>choice;
			a=(rand()%3)+1;
			cout<<"-> Computer choice is : "<<a<<endl;
			if(a==choice)
			{
				cout<<"\nDraw";
			}
			else if((a==3&&choice==2)||(a==2&&choice==1)||(a==1&&choice==3))
			{
				cscore=1;
				cout<<"\nYour score is "<<score<<endl;
				cout<<"Computer score is "<<cscore;
			}
			else if((a==3&&choice==1)||(a==2&&choice==3)||(a==1&&choice==2))
			{
				score=1;
				cout<<"\nYour score is "<<score<<endl;
				cout<<"Computer score is "<<cscore;
			}
			s=s+score;
			c=c+cscore;
			cout<<"\n\nPress any key to continue.\n";
			getch();
	      }
		}
		void final()
		{
			cout<<"\nYour final score is "<<s;
			cout<<"\nComputer final score is "<<c;
			if(s>c)
			{
				cout<<"\nYou win\n";
			}
			else if(s==c)
			{
				cout<<"\nDraw";
			}
			else cout<<"\nComputer wins";
		}		
};
int main()
{
	game obj;
	obj.Name();
	obj.Rounds();
	obj.Game();
	obj.final();
}