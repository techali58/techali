#include<stdio.h>
int main()
{
	char ch;
	printf("enter alphabet:");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("lower case");
	}
	else if(ch>='A'&&ch<='Z')
	{
		printf("uppercase");
	}
	else
	{
		printf("not alphabet");
	}
	return 0;
}