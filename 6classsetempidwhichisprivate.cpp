#include<iostream>
using namespace std;
class Employee
{
	private:
		int empid;
		float salary;
	public:
		void setid(int id)
		{
			empid=id;
			cout<<empid;
		}
};
int main()
{
	Employee e;
	int n;
	cout<<"enter id:\n";
	cin>>n; 
	e.setid(n);
	return 0;
}