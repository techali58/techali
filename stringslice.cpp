#include<stdio.h>
#include<string.h>
void slice(char str[]);
int main()
{
	char string[100];
	printf("enter string:\n");
	gets(string);
	slice(string);	
}
void slice(char str[])
{
	int n,m;
	printf("enter n and m:\n");
	scanf("%d %d",&n,&m);
	char slistr[(m-n)+2];
	int i,j;
	for(i=n,j=0;i<=m&&j<=m;i++,j++)
	{
		slistr[j]=str[i];
	}
	slistr[j]='\0';
	puts(slistr);
}