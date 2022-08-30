#include<stdio.h>
int count(int *arr,int n);
int main()
{
	int arr[5];
	printf("Enter array elements:\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("no of odd nos is:%d\n",count(arr,5));
}
int count(int *arr,int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			count++;
		}
	}
	return count;
}