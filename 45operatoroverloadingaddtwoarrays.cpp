#include<iostream>
using namespace std;
class Array
{
	int arr[5];
	public:
		void setarr()
		{
			cout<<"enter array elements:\n";
			for(int i=0;i<5;i++)
			{
				cin>>arr[i];
			}
		}
		Array operator+(Array b)
		{
			Array c;
			for(int i=0;i<5;i++)
			{
				c.arr[i]=arr[i]+b.arr[i];
			}
			return c;
		}
		void show()
		{	
		    cout<<"array elements are:\n";
			for(int i=0;i<5;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		
};
int main() 
{
	Array a,b,c;
	a.setarr();
	b.setarr();
	c=a+b;
	c.show();
	return 0;
}
