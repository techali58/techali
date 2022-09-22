#include<iostream>
using namespace std;
class cal
{
	private:
		int a,b,c,d,e,f;
	public:
		cal(int x,int y)
		{
			 c=x*y;
			 d=x/y;
			 e=x+y;
			 f=x-y;
		}
		void print()
		{
			cout<<"multi = "<<c<<endl;
			cout<<"div = "<<d<<endl;
			cout<<"add = "<<e<<endl;
			cout<<"sub = "<<f<<endl;
		}
};
int main()
{
	int a,b;
	cout<<"enter a and b:\n";
	cin>>a>>b;
	cal C(a,b);
	C.print();
}