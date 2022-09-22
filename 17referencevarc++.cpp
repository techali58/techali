#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a:\n";
	cin>>a;
	int &b=a;
	cout<<"a is "<<a<<endl;
	b=5;
	cout<<"a is "<<a;
	return 0;
}