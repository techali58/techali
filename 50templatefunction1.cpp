#include<iostream>
using namespace std;
template <class t>
t sum(t a,t b)
{
	return a+b;
}
int main()
{
	cout<<"sum of integers is "<<sum(5,2)<<endl;
	cout<<"sum of float is "<<sum(1.1,2.2);
	return 0;
}
