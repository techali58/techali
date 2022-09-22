#include<iostream>
using namespace std;
class employee
{
	private:
		int empid;
		int salary;
		public:
		void setid(int id)
		{
			empid=id;
			cout<<empid;
		}
};
int main()
{
	employee e;
	e.setid(5);
	return 0;
}