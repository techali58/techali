#include<stdio.h>
int main()
{
	int n,sum;
	printf("enter n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	  sum=sum+i;
	}
	printf("sum is %d",sum);
	return 0; 
}