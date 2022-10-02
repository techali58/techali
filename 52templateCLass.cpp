#include<iostream>
using namespace std;
template <class t>
class test
{
	t a,b;
	public:
		void get()
		{
			cout<<"enter values:\n";
			cin>>a>>b;
		}
		t sum();
};
template <class t>
t test<t>::sum()
{
	return a+b;
}
int main()
{
	test <int>obj1;
	test <float>obj2;
	obj1.get();
	cout<<"sum is "<<obj1.sum()<<endl;
	obj2.get();
	cout<<"sum is "<<obj2.sum();
	return 0;
}