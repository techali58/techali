#include<iostream>
using namespace std;
class base
{
	public:
		~base()
		{
			cout<<"base class destructor\n";
		}
};
class der:public base
{
	public:
		~der()
		{
			cout<<"derived class destructor\n";
		}
};
int main()
{
	der d;
	return 0;
}