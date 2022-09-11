#include<stdio.h>
int countL(char arr[]);
int main()
{
	char name[50];
	printf("enter your name:\n");
	gets(name);
	printf("length is %d",countL(name));
	return 0;
}
int countL(char arr[])
{
	int count=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		count++;
	}
	return count;
}