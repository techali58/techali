#include<stdio.h>
int main()
{
	int n,evensum=0,oddsum=0; 
	printf("Enter n:");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			evensum=evensum+i;
		}
		else
		{
			oddsum=oddsum+i;
		}
	}
	printf("evensum=%d,oddsum=%d\n",evensum,oddsum);
}