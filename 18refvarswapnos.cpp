#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
	cout<<"x = "<<x<<endl<<"y= "<<y;
}
int main()
{
	int a,b;
	cout<<"enter a and b:\n";
	cin>>a>>b;
	swap(a,b);
	return 0;
}
