#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
	public:
		sample()
		{
			cout<<"enter value of a and b:\n";
			cin>>a>>b;
		}
		friend class test;
};
class test
{
	public:
		void putab(sample obj)
		{
			cout<<"a= "<<obj.a<<endl;
			cout<<"b= "<<obj.b<<endl;
		}
};
int main()
{
	sample s;
	test t;
	t.putab(s);
	return 0;
}