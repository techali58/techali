#include<iostream>
using namespace std;
class Father
{
	protected:
		int money,property;
	public:
		void setfath()
		{
			cout<<"enter money and no of property:\n";
			cin>>money>>property;
		}
};
class Mother:public Father
{
	private:
		int m,p;
	public:
		void setmoth()
		{
			m=money/2;
			p=property/2;
			cout<<"mother money is "<<m<<endl;
			cout<<"mother property is "<<p<<endl;
		}
};
class Son:public Father
{
	private:
		int pro;
	public:
		void setpro()
		{
			pro=property/10;
			cout<<"son property is "<<pro<<endl;
		}
};
class Daughter:public Father
{
	private:
		int mon;
	public:
		void setmon()
		{
			mon=money/2;
			cout<<"daughter money is "<<mon<<endl;
		}
};
int main()
{
	
	Mother m;
	m.setfath();
	m.setmoth();
	Son s;
	s.setfath();
	s.setpro();
	Daughter d;
	d.setfath();
	d.setmon();
	return 0;	
}