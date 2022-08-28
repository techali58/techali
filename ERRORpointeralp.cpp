#include<stdio.h>
int main()
{
	char i='a';
	char *ptr=&i;
	for(*ptr='a';*ptr<='z';*ptr++)
	{
		printf("%c\n",*ptr);
	}
	return 0;
}