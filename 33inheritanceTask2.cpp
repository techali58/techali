#include<iostream>
#include<string>
using namespace std;
class user
{
	protected:
		int atmpin;
	public:
		void setpin()
		{
			cout<<"enter atmpin:\n";
			cin>>atmpin;
		}
};
class balance:public user
{
	protected:
		int balnce=50000;
	public:
		int checkbal()
		{
			int pin;
			cout<<"enter pin:\n";
			cin>>pin;
			if(pin==atmpin)
			{
				return balnce;
			}
			else
			{
				cout<<"invalid pin";
			}	
		}
		void withdraw()
		{
			int amt;
			cout<<"enter the amount to withdraw:\n";
			cin>>amt;
			balnce=balnce-amt;
		}
		int rembal()
		{
			return balnce;
		}
};
int main()
{
	balance u;
	u.setpin();
	cout<<u.checkbal()<<endl;
	string ch;
	cout<<"do you want to withdraw?\n";
	cin>>ch;
	if(ch=="yes")
	{
		u.withdraw();
		cout<<"remaining balance ="<<u.rembal();
	}
	else
	{
		cout<<"your balance is "<<u.rembal();
	}
	
	return 0;
}