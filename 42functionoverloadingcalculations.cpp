#include<iostream>
using namespace std;
class Cal
{
	private:
		int a,b;
	public:
		int calcu(int x,int y)
		{
		   return x+y;
		}
		int calcu()
		{
			cout<<"enter value of a:\n";
			cin>>a;
			cout<<"enter value of b:\n";
			cin>>b;
			cout<<"sub ="<<a-b<<endl;
		}
		int calcu(int p)
		{
			int q;
			cout<<"enter value of q:\n";
			cin>>q;
			cout<<"multi = "<<p*q<<endl;
		}
		int calcu(float d,float e)
		{
			return d/e;
		}
};
int main()
{
	Cal c;
	cout<<"add = "<<c.calcu(3,8)<<endl;
	c.calcu();
	c.calcu(5);
	cout<<"div = "<<c.calcu(8,4);
	return 0;
}