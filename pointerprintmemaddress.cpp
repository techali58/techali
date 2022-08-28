#include<stdio.h>
int main()
{
	int age=22;
	int *ptr=&age;
	//PRINTING ADDRESS
	printf("%p\n",&age);
	printf("%u\n",&age);
	printf("%p\n",ptr);
	printf("%p\n",&ptr);
	//PRINTING VALUE
	printf("%d\n",age);
	printf("%d\n",*ptr);
	printf("%d\n",*(&age));
	return 0; 
}