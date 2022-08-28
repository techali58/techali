#include<stdio.h>
int main()
{
	int num,b,l,f,c,d,e,swap,finalans,ans=0,a=0;
	printf("enter num:");
	scanf("%d",&num);
	int number=num;
	while(num>0)
	{
		num=num/10;
		a++;
	}
	if(a==1)
	{
		printf("num can't be swapped");
	}
	else if(a==2||a==3)
	{
		num=number;
		while(num>0)
		{
			b=num%10;
			num=num/10;
			ans=ans*10+b;
		}
		printf("swapped num is %d",ans);
	}
	else
	{
		num=number;
		l=num%10;//1234->4
		swap=l;
		while(num>10)
		{
			num=num/10;
		}
		f=num;
		num=number;
		c=num/10;//123
		while(c>10)
		{
			d=c%10;
			c=c/10;
			ans=ans*10+d;
		}
		while(ans>0)
		{
			e=ans%10;//32->2
			ans=ans/10;
			swap=swap*10+e;	
		}
		finalans=swap*10+f;
		printf("swapped num is %d",finalans);
	}
	return 0;
}