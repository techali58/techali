#include<iostream>
#include<string.h>
using namespace std;
class Bank
{
	private:
		string name;
		string type;
		int accno;
		float balance;
	public:
		void setdata(string n,string t,int acc,float bal)
		{
			name=n;
			type=t;
			accno=acc;
			balance=bal;
		}
		void deposit(float deposit)
		{
			balance=balance+deposit;
		}
		int checkbal()
		{
			return balance;
		}
		void withdraw(float widraw)
		{
			balance=balance-widraw;
		}
		void display()
		{
			cout<<"Name is "<<name<<endl;
			cout<<"Balance is "<<balance<<endl;
		}
};
int main()
{
	Bank cust;
	cust.setdata("Alisha","Savings",10234,50000);
	cust.deposit(25000);
	cust.checkbal();
	if(cust.checkbal()>=50000)
	{
		cust.withdraw(5000);
	}
	cust.display();
	return 0;
}