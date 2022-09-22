#include<iostream>
using namespace std;
class Employee
{
	private:
		int id;
		int salary;
	public:
		Employee(int id,int salary)
		{
			this->id=id;
			this->salary=salary;
		}
		Employee(Employee &e)
		{
			id=e.id;
			salary=e.salary;
		}
		void print()
		{
			cout<<id<<endl;
			cout<<salary<<endl;
		}
};
int main()
{
	Employee e1(101,25000),e2(e1);
	e1.print();
	e2.print();
	return 0;
}