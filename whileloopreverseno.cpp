#include<stdio.h>
int main()
{
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
    int i=0,rev=0;
    while(n>0)
    {
    	int a=n%10;
    	n=n/10;
    	rev=rev*10+a;
    	i++;
	}
	printf("rev no is %d",rev);
}