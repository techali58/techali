#include<iostream>
#include<string>
using namespace std;
class Acc
{
	private:
		int accno;
		string name;
	public:
		void getacc()
		{
			cout<<"enter acc no and name:\n";
			cin>>accno>>name;
		}
		void putacc()
		{
			cout<<"accno is "<<accno<<endl;
			cout<<"name is "<<name<<endl;
		}
};
class Savings: public Acc
{
	private:
		float bal;
	public:
		void getbal()
		{
			cout<<"enter bal:\n";
			cin>>bal;
			if(bal<500)
			{
				cout<<"min bal needed 500";
			}
			else
			{
				cout<<"savings acc created";
			}
		}
};
class Current: public Acc
{
	private:
		float bal;
	public:
		void getbal()
		{
			cout<<"enter bal:\n";
			cin>>bal;
			if(bal<1000)
			{
				cout<<"min bal needed 1000";
			}
			else
			{
				cout<<"current acc created";
			}
		}
};
int main()
{
	string acc;
	cout<<"what type of acc you want to create?\n";
	cin>>acc;
	if(acc=="savings")
	{
		Savings s;
		s.getacc();
		s.putacc();
		s.getbal();
	}
	else
	{
		Current c;
		c.getacc();
		c.putacc();
		c.getbal();
	}
	return 0;
}