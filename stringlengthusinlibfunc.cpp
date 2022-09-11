#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	printf("enter name:\n");
	gets(name);
	printf("length is %d",strlen(name));
	return 0;
}