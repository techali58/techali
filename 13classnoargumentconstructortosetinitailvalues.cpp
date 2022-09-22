#include<iostream>
using namespace std;
class Employee
{
	private:
		int id;
		int salary;
	public:
	Employee()
	{
		cout<<"constructor with no arguments called:\n";
		id=0;
		salary=0;
	}
	void print()
	{
		cout<<id<<endl;
		cout<<salary<<endl;
	}
};
int main()
{
	Employee e;
	e.print();
	return 0;
}