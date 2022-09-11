#include<stdio.h>
int main()
{
	char name[50];
	printf("Enter your name:\n");
	gets(name);
	int count=0;
	for(int i=0;name[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
	return 0; 
}