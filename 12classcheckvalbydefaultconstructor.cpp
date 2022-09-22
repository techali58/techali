#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		int salary;
	public:
		void print()
		{
			cout<<id<<endl;
			cout<<salary;
		}
};
int main()
{
	employee e;
	e.print();//will get garbage value coz of default constructor made by compiler.
	return 0;
}