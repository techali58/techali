#include<iostream>
#include<string.h>
using namespace std;
class stu
{
	private:
		int id;
		string name;
	public:
		void setstu()
		{
			cout<<"enter id,name:\n";
			cin>>id>>name;
		}
		void putstu()
		{
			cout<<"id= "<<id<<endl;
			cout<<"name = "<<name<<endl;
		}
};
class marks
{
	protected:
		int m1,m2,m3;
	public:
		void setmarks()
		{
			cout<<"enter marks:\n";
			cin>>m1>>m2>>m3;
		}
		void putmarks()
		{
			cout<<"m1= "<<m1<<endl;
			cout<<"m2= "<<m2<<endl;
			cout<<"m3= "<<m3<<endl;
		}
};
class result:public stu,public marks
{
	private:
		int tot;
		float avg;
	public:
		void show()
		{
			tot=m1+m2+m3;
		    avg=tot/3.0;
			cout<<"total= "<<tot<<endl;
			cout<<"avg= "<<avg<<endl;
		}
};
int main()
{
	result r;
	r.setstu();
	r.setmarks();
	r.putstu();
	r.putmarks();
	r.show();
	return 0; 
}