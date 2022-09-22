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
			cout<<this->length<<endl;
			this->breadth=breadth;
			cout<<this->breadth;
		}
};
int main()
{
	Rectangle r1(2,4);
	return 0;
}