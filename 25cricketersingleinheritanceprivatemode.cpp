#include<iostream>
#include<string>
using namespace std;
class cricketer
{
	protected:
		string name;
		int runs;
		float performance;
	public:
		void setdata()
		{
			cout<<"enter name,runs,performance:\n";
			cin>>name>>runs>>performance;
		}
		void getdata()
		{
            cout<<"name is "<<name<<endl;
			cout<<"runs= "<<runs<<endl;
			cout<<"performance = "<<performance<<endl;
		}		
};
class batsman:public cricketer
{
	private:
		int outno,avg;
	public:
		void setavg()
		{
			cout<<"enter outno:\n";
			cin>>outno;
			avg=runs/outno;
		}
		int getavg()
		{
			return avg;
		}
};
int main()
{
	batsman b;
	b.setdata();
	b.setavg();
	b.getdata();
	cout<<"avg is "<<b.getavg();
	return 0; 
}