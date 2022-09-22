#include<iostream>
using namespace std;
class Employee
{
	private:
		int empid;
		int salary;
	public:
		void setdata(int empid,int salary)
		{
			this->empid=empid;
			this->salary=salary;
		}
		int getid()
		{
			return empid;
		}
		int getsal()
		{
			return salary;
		}
};
int main()
{
	Employee e;
	int id,sal;
	cout<<"enter id and sal:\n";
	cin>>id>>sal;
	e.setdata(id,sal);
	cout<<e.getid()<<endl;
	cout<<e.getsal();
	return 0;
}