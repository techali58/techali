#include<iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
		A()
		{
			cout<<"enter value of a:\n";
			cin>>a;
		}
		friend void swap(A ref1,B ref2);
};
class B
{
	int b;
	public:
		B()
		{
			cout<<"enter value of b:\n";
			cin>>b;
		}
		friend void swap(A ref1,B ref2);
};
void swap(A ref1, B ref2)
{
	ref1.a=ref1.a + ref2.b;
	ref2.b=ref1.a - ref2.b;
	ref1.a=ref1.a-ref2.b;
	cout<<"a= "<<ref1.a<<endl<<"b = "<<ref2.b<<endl;	
}
int main()
{
	A obj1;
	B obj2;
	swap(obj1,obj2);
}