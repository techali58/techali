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
class phy:private student
{
	private:
		int height,weight;
	public:
		void setphy()
		{
			setdata();
			cout<<"enter height:\n";
			cin>>height;
			cout<<"enter weight:\n";
			cin>>weight;
		}
		void getphy()
		{
			getdata();
			cout<<height<<endl;
			cout<<weight<<endl;
		}
};
int main()
{
	phy p;
    p.setphy();
    p.getphy();
    return 0;	
}