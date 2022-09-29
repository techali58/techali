#include<iostream>
using namespace std;
class calarea
{
	int s1,s2;
	public:
		int area()
		{
			cout<<"enter s1:\n";
			cin>>s1;
			return s1*s1;
		}
		int area(int l,int b)
		{
			return l*b;
		}
		int area(int r)
		{
			return 3.14*r*r;
		}
		int area(float cons,double base,double altitude)
		{
			return cons*base*altitude;
		}
};
int main()
{
	calarea square,circle,triangle,rectangle;
	cout<<square.area()<<" is square area";
	cout<<"\nrec area is "<<rectangle.area(5,7)<<endl;
	cout<<"circle area is "<<circle.area(6)<<endl;
	cout<<"triangle area is "<<triangle.area(0.5,4,8)<<endl;
}