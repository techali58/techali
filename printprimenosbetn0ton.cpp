#include<stdio.h>
int main()
{
	int n,a,count;
	printf("enter n:");
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		count=0;
		for(int j=i;j>=1;j--)
		{
			a=i%j;
			if(a==0)
			{
				count=count+1;
			}
		}
		if(count==2)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}