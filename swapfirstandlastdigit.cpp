#include<stdio.h>
int main()
{
	int n,num;
	printf("Enter n:\n");
	scanf("%d",&n);
	int a=n%10;
	n=n/10;
	while(n>10)
	{
	   int b=n%10;
		n=n/10;
	    num=num*10+b;
	}
	while(num>0)
	{
		int c=num%10;
		num=num/10;
		a=a*10+c;
    }
    int res=a*10+n;
    printf("%d\n",res);
}