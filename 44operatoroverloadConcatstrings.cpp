#include<iostream>
#include<string>
using namespace std;
class String
{
	char s[50];
	public:
		void get()
		{
			cout<<"enter s:\n";
			cin>>s;
		}
		void show()
		{
			cout<<"string is "<<s;
		}
		String operator +(String obj)
		{
			String obj3;
			strcpy(obj3.s,s);
			strcat(obj3.s," ");
			strcat(obj3.s,obj.s);
			return obj3;
		}
};
int main()
{
	String obj1,obj2,obj3;
	obj1.get();
	obj2.get();
	obj3=obj1+obj2;
	obj3.show();
	return 0;
}