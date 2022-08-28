#include<stdio.h>
char temp(int n);
int main()
{
	int n;
	printf("Enter temp:");
	scanf("%d",&n);
	printf("%c",temp(n));
	return 0;
}
char temp(int n)
{
	if(n>=38)
	{
		return 'h';
	}
	else return 'c';
}