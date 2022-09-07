#include<stdio.h>
char fun(int n);
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	printf("%c",fun(n));
	return 0; 
}
char fun(int n)
{
	if(n%2==0)
	{
		return 'e';
	}
	return 'o';
}