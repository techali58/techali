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
	Book b1,b2,b3;
	cout<<"enter book title,author and pages:\n";
	cin>>b1.title>>b1.author>>b1.pages;
	cout<<b1.title<<endl<<b1.author<<endl<<b1.pages<<endl;
	cout<<"enter book title,author and pages:\n";
	cin>>b2.title>>b2.author>>b2.pages;
	cout<<b2.title<<endl<<b2.author<<endl<<b2.pages<<"\n";
	cout<<"enter book title,author and pages:\n";
	cin>>b3.title>>b3.author>>b3.pages;
	cout<<b3.title<<endl<<b3.author<<endl<<b3.pages;
	
	return 0;
}