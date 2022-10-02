#include<iostream>
using namespace std;
template <class t>
class test
{
	int size;
	t arr[];
	public:
		void getsize()
		{
			 cout<<"enter size:\n";
			 cin>>size;
		}
		void getarr()
		{
			cout<<"enter array elements:\n";
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		void sortarr()
		{
			for(int i=0;i<size;i++)
			{
				for(int j=i+1;j<size;j++)
				{
					if(arr[i]>arr[j])
					{
						int temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
			cout<<"sorted array elements are:\n";
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
};
int main()
{
	test <int>obj;
	obj.getsize();
	obj.getarr();
	obj.sortarr();
	return 0;
}