#include<iostream>
using namespace std;
class Boss
{
   private:
   	int empid;
   	int salary;
   	public:
   		void setsalary(int sal)
   		{
   			salary=sal;
		   }
   		int setgrosspay(int bonus)
   		{
		   return salary+bonus;   		
		}
};
int main()
{
	Boss e;
	int sal;
	cout<<"enter sal:\n";
	cin>>sal;
	e.setsalary(sal);
	int bonus;
	cout<<"enter bonus:\n";
	cin>>bonus;
	cout<<"gross pay is "<<e.setgrosspay(bonus);
	return 0;
}