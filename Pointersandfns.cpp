//cal sum,product,and avg and print it in main fn
//3 vals can't be returned using return 
#include<stdio.h>
void cal(int a,int b,int *sum,int *product,int *avg);
int main()
{
	int x,y,sum,product,avg;
	printf("enter x and y:");
	scanf("%d %d",&x,&y);
	cal(x,y,&sum,&product,&avg);
	printf("sum is %d,product is %d,average is %d",sum,product,avg);
    return 0; 
}
void cal(int a,int b,int *sum,int *product,int *avg)
{
	*sum=a + b;
	*product=a*b;
    *avg= *sum/2;
}
