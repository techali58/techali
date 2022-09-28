#include<iostream>
using namespace std;
class num2;
class num1
{
	int a;
	public:
		num1()
		{
			cout<<"enter a:\n";
			cin>>a;
		}
		friend int max(num1& ref1,num2& ref2);
};
class num2
{
	int b;
	public:
		num2()
		{
			cout<<"enter b:\n";
			cin>>b;
		}
		friend int max(num1& ref1,num2& ref2);
};
int max(num1& ref1,num2& ref2)
{
	if(ref1.a>ref2.b)
	{
		return ref1.a;
	}
	else
	{
		return ref2.b;
	}
};
int main()
{
	num1 n;
	num2 m;
	cout<<"max no is "<<max(n,m);
}