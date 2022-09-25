#include<iostream>
#include<string>
using namespace std;
class stu
{
	private:
		string name,course;
	public:
		stu()
		{
		}
		stu(string name,string course)
		{
			this->name=name;
			this->course=course;
		}
		void showstu()
		{
			cout<<"name= "<<name<<endl;
			cout<<"course = "<<course<<endl;
		}
};
class marks:public stu
{
	private:
		int m,p,c;
	public:
		marks(string name,string course,int m,int p,int c):stu(name,course)
		{
			this->m=m;
			this->p=p;
			this->c=c;
		}
		void showmarks()
		{
			cout<<m<<endl<<p<<endl<<c<<endl;
		}
};
int main()
{
	marks m("alisha","bio",99,98,97);
	m.showstu();
	m.showmarks();
	return 0;
}