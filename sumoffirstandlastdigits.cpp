#include<stdio.h>
int main()
{
	int num,a,b;
	printf("enter number:");
	scanf("%d",&num);
	a=num%10;
	while(num>0)
	{
		b=num%10;
		num=num/10;
	}
	printf("sum is %d:",a+b);
	return 0;
}