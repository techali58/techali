#include<iostream>
using namespace std;
class Book
{
	public:
	int pages;
	string name;
	Book()
	{
		cout<<"creating obj\n";
	}
};
int main()
{
	Book b1;
	Book b2;
	return 0;
}
