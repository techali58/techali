#include<iostream>
#include<string>
using namespace std;
class stu
{
	private:
		int id;
		string name;
	public:
		void setstu()
		{
			cout<<"enter id and name:\n";
			cin>>id>>name;
		}
		void putstu()
		{
			cout<<"id= "<<id<<endl;
			cout<<"name= "<<name<<endl;
		}
};
class marks:public stu
{
	protected:
		int m1,m2,m3;
	public:
		void setmarks()
		{
			cout<<"enter marks of 3 sub:\n";
			cin>>m1>>m2>>m3;
		}
};
class result:public marks
{
	private:
		int total;
		float avg;
	public:
		void setres()
		{
			total=m1+m2+m3;
			avg=total/3.0;
			cout<<"total= "<<total<<endl;
			cout<<"avg= "<<avg<<endl;
		}
};
int main()
{
	result r;
	r.setstu();
	r.setmarks();
	r.putstu();
	r.setres();
	return 0;
}