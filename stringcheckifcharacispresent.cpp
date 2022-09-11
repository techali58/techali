#include<stdio.h>
#include<string.h>
void checkch(char str[]);
int main()
{
	char str[100];
	printf("enter string:\n");
	gets(str);
	checkch(str);
}
void checkch(char str[])
{
	char ch;
	printf("enter character to be checked:\n");
	scanf("%c",&ch);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			printf("character is present");
			return;
		}
	}
	printf("character is NOT present");
}