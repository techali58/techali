#include<iostream>
using namespace std;
class calc
{
	public:
	int a;
	int b;
	int add(int a,int b)
	{
		return a+b;
	}
	int sub(int a,int b)
	{
		return a-b;
	}
	int multi(int a,int b)
	{
		return a*b;
	}
	float div(int a,int b)
	{
		return a/b;
	}
};
int main()
{
	calc obj;
	cout<<"enter two nos:\n";
	cin>>obj.a>>obj.b;
	char ch;
	cout<<"enter your choice:\n";
	cin>>ch;
	switch(ch)
	{
		case'+': cout<<obj.add(obj.a,obj.b);
		break;
		case'-': cout<<obj.sub(obj.a,obj.b);
		break;
		case'*': cout<<obj.multi(obj.a,obj.b);
		break;
		case'/': cout<<obj.div(obj.a,obj.b);
		break;
	}
	return 0;
}