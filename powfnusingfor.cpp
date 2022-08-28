#include<stdio.h>
int main()
{
	int n,pow,res=1;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter power:");
	scanf("%d",&pow);
	for(int i=1;i<=pow;i++)
	{
	    res=res*n;
	}
	printf("result is %d",res);
	return 0; 
}