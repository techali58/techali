#include<iostream>
using namespace std;
class Book
{
	public:
	string title;
	string author;
	int pages;
};
int main()
{
	Book b;
	b.title="Alchemist";
	b.author="paulo";
	b.pages=100;
	cout<<b.title<<endl<<b.author<<endl<<b.pages;
}