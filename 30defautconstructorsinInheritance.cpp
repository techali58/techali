#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"base constructor created.\n";
		}
};
class der:public base
{
	public:
		der()
		{
			cout<<"derived class constructor created.\n";
		}
};
int main()
{
	der d;
	return 0;
}