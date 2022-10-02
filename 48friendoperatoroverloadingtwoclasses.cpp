#include<iostream>
using namespace std;
class test2;
class test1
{
	int a;
	public:
		test1()
		{
			cout<<"enter a:\n";
			cin>>a;
		}
	friend int operator>(test1 x,test2 y);	
};
class test2
{
	int b;
	public:
		test2()
		{
			cout<<"enter b:\n";
			cin>>b;
		}
		friend int operator>(test1 x,test2 y);
};
int operator>(test1 x,test2 y)
{
	if(x.a>y.b)
	{
		return 1;
	}
	else return 0;
}
int main()
{
	test1 t1;
	test2 t2;
	if(t1>t2)
	{
		cout<<"t1 is big";
	}
	else cout<<"t2 is big";
	return 0;
}