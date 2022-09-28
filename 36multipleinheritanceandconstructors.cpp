#include<iostream>
using namespace std;
class students
{
	private:
		int rollno;
	public:
	students()
	{
		cout<<"Enter rollno:\n";
		cin>>rollno;
	}
	void showstu()
	{
		cout<<"rollno is "<<rollno<<endl;
	}
};
class test
{
	protected:
		int m1,m2;
	public:
		test()
		{
			cout<<"enter m1 and m2:\n";
			cin>>m1>>m2;
		}
		void showtest()
		{
			cout<<"m1="<<m1<<endl<<"m2= "<<m2<<endl;
		}
};
class result:public students,public test
{
	private:
		int total;
	public:
		result()
		{
			total=m1+m2;
		}
		void showres()
		{
			cout<<"total is "<<total<<endl;
		}
};
int main()
{
	result r;
	r.showstu();
	r.showtest();
	r.showres();
	return 0;
}