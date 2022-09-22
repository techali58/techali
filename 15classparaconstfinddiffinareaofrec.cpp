#include<iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(int length,int breadth)
		{
			this->length=length;
			this->breadth=breadth;
		}
		int area()
		{
			return length*breadth;
		}
};
int main()
{
	int l1,l2,b1,b2;
	cout<<"enter l1 and b1:\n";
	cin>>l1>>b1;
	Rectangle r1(l1,b1);
	cout<<"enter l2 and b2:\n";
	cin>>l2>>b2;
	Rectangle r2(l2,b2);
	cout<<"diff in area is "<<r1.area()-r2.area();
	return 0;	
}