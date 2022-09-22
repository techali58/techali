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
		void display()
		{
			cout<<id<<endl;
			cout<<salary<<endl;
		}
};
int main()
{
	Employee e1(101,24000);
	Employee e2(102,25000);
	e1.display();
	e2.display();
	return 0;
}