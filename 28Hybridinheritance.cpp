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
			cout<<"enter id,name:\n";
			cin>>id>>name;
		}
};
class marks:public stu
{
	protected:
		int m,p,c;
	public:
		void setmarks()
		{
			cout<<"enter 3 sub marks:\n";
			cin>>m>>p>>c;
		}
};
class sports
{
	protected:
		int spmarks;
	public:
		void setsp()
		{
			cout<<"enter sports marks:\n";
			cin>>spmarks;
		}
};
class result:public marks,public sports
{
	private:
		int tot;
		float avg;
	public:
		void show()
		{
			tot=m+p+c;
			avg=tot/3.0;
			cout<<"total = "<<tot<<endl;
			cout<<"avg= "<<avg<<endl;
			cout<<"avg+sportsmarks = "<<avg+spmarks<<endl;
		}
};
int main()
{
	result r;
	r.setstu();
	r.setmarks();
	r.setsp();
	r.show();
	return 0;
}