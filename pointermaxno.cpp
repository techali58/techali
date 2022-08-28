#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b:");
	scanf("%d %d",&a,&b);
	int *ptr=&a;
	int *bptr=&b;
	if(*ptr>*bptr)
	{
		printf("max no is %d",*ptr);
	}
	else
	{
		printf("max no is %d",*bptr);
	}
	return 0; 
}