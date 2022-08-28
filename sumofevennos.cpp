#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
}