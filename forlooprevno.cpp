#include<stdio.h>
int main()
{
	int n,count=0,rev=0;
	printf("enter n:\n");
	scanf("%d",&n);
	int store=n;
	while(n>0)
	{
		n=n/10; 
		count++;
	}
	printf("no of digits is %d\n",count);
	n=store;
	for(int i=1;i<=count;i++)
	{
		int a=n%10;
		n=n/10;
		rev=rev*10+a;
	}
	printf("rev no is %d",rev);
}