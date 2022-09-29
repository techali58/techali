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
		void compare(test t2)
		{
			if(a==t2.a)
			{
				cout<<"objects are equal.";
			}
			else
			{
				cout<<"objects are not equal.";
			}
		}
};
int main()
{
	test obj1;
	test obj2;
    obj1.compare(obj2);
	return 0;
}