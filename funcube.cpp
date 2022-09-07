#include<stdio.h>
int cube(int n);
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	printf("cube is %d",cube(n));
	return 0; 
}
int cube(int n)
{
	return n*n*n;
}