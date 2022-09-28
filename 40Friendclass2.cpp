#include<iostream>
#include<string>
using namespace std;
class Author
{
	private:
		string aname;
		friend class book;
};
class book
{
	private:
		string bname;
		int price;
		Author a;
	public:
		
		void setdata()
		{
			cout<<"enter author name:\n";
			cin>>a.aname;
			cout<<"enter book name:\n";
			cin>>bname;
			cout<<"enter price:\n";
			cin>>price;
		}
		void show()
		{
			cout<<a.aname<<endl<<bname<<endl<<price;
		}
};
int main()
{
	book b;
	b.setdata();
	b.show();
	return 0;
}