#include<stdio.h>
void takevalue(int arr[],int n);
void storevalue(int arr[],int n,int even[],int ceven,int odd[],int codd);
void print(int array[],int size);
int main()
{
	int n,ceven=0,codd=0;
	printf("enter n:\n");
	scanf("%d",&n);
	int arr[n],even[n],odd[n];
	printf("Enter array elements:\n");
	takevalue(arr,n);
	storevalue(arr,n,even,ceven,odd,codd);
	
}
void takevalue(int arr[],int n)
{
	scanf("%d",&arr[n-1]);
	if(n==1)
	{
		return;
	}
	takevalue(arr,n-1);
}
void storevalue(int arr[],int n,int even[],int ceven,int odd[],int codd)
{
	if(arr[n-1]%2==0)
	{
		even[ceven]=arr[n-1];
		ceven++;
		
	}
	else
	{
		odd[codd]=arr[n-1];
		codd++;
		
	}
	if(n==1)
	{
	printf("even array elements are:\n");
	print(even,ceven);
	printf("odd array elements are:\n");
	print(odd,codd);
		return;
	}
	storevalue(arr,n-1,even,ceven,odd,codd);
	
}
void print(int array[],int size)
{
	printf("%d\n",array[size-1]);
	if(size==1)
	{
		return;
	}
	print(array,size-1);
}