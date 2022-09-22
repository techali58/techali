#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		string name;
		int rollno;
	public:
		void setdata()
		{
			cout<<"enter name:\n";
			cin>>name;
			cout<<"enter rollno:\n";
			cin>>rollno;
		}
		void getdata()
		{
			cout<<name<<endl;
			cout<<rollno<<endl;
		}		
};
class phy: public student
{
	private:
		int height,weight;
	public:
		void setphy()
		{
			cout<<"enter height:\n";
			cin>>height;
			cout<<"enter weight:\n";
			cin>>weight;
		}
		void getphy()
		{
			cout<<height<<endl;
			cout<<weight<<endl;
		}
};
int main()
{
	phy p;
	p.setdata();
	p.setphy();
	p.getdata();
	p.getphy();
	return 0;
}