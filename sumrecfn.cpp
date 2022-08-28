#include<stdio.h>
void printnumb(int n);
int main()
{
	printnumb(1);
	return 0;
}
void printnumb(int n)
{
	if(n==6)
	{
		return;
	}
	printf("%d\n",n);
	printnumb(n+1);
}