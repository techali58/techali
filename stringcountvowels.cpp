#include<stdio.h>
#include<string.h>
int count(char str[]);
int main()
{
	char str[100];
	printf("enter string:\n");
	gets(str);
	printf("no of vowels in the string: %d",count(str));
	return 0;
}
int count(char str[])
{
	int count=0;
//	int a=strlen(str);
//	for(int i=0;i<a;i++)
    for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			count++;
		}
	}
	return count;
}