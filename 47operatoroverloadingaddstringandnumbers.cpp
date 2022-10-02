#include<iostream>
#include<string>
using namespace std;
class test
{
	char st[100];
	int marks;
	public:
		void read()
		{
			cout<<"enter string:\n";
			cin>>st;
			cout<<"enter marks:\n";
			cin>>marks;
		}
		test operator+(test t2)
		{
			test t3;
			strcpy(t3.st,st);
			strcat(t3.st," ");
			strcat(t3.st,t2.st);
			t3.marks=marks+t2.marks;
			return t3;
		}
		void show()
		{
			cout<<"string is "<<st<<endl;
			cout<<"marks are "<<marks;
		}
};
int main()
{
	test t1,t2,t3;
	t1.read();
	t2.read();
	t3=t1+t2;
	t3.show();
}