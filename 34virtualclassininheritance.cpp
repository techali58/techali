#include<iostream>
using namespace std;
class c1
{
	public:
		void c1fun()
		{
			cout<<"c1 fun"<<endl;
		}
};
class c2:public virtual c1
{
	public:
		void c2fun()
		{
			cout<<"c2 fun"<<endl;
		}
};
class c3:public virtual c1
{
	public:
		void c3fun()
		{
			cout<<"c3 fun"<<endl;
		}
};
class c4:public c2,public c3
{
	public:
		void c4fun()
		{
			cout<<"c4 fun"<<endl;
		}
};
int main()
{
	c4 obj;
	obj.c1fun();
	obj.c2fun();
	obj.c3fun();
	obj.c4fun();
	return 0;
}