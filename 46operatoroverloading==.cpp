#include<iostream>
using namespace std;
class test
{
	int a;
	public:
		test()
		{
			cout<<"enter a:\n";
			cin>>a;
		}
		int operator==(test obj)
		{
			if(a==obj.a)
			{
				return 1 ;
			}
			else return 0;
		}
};
int main()
{
	test s1,s2;
	if(s1==s2)
	{
		cout<<"same value\n";
	}
	else cout<<"diff value.";
}