#include<iostream>
using namespace std;
template <class t,class u>
float sum(t a,u b)
{
	return a+b;
}
int main()
{
	cout<<"sum of two int is "<<sum(2,5)<<endl;
	cout<<"sum of two float is "<<sum(1.1,2.2)<<endl;
	cout<<"sum of one int and one float is "<<sum(1.1,3);
	return 0;
}