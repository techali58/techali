#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int x=3,y=5;
	swap(&x,&y);
	printf("x is %d and y is %d\n",x,y);
	return 0; 
}
void swap(int *a,int *b)
{
    //*a= *a+(*b);
	//*b= *a-(*b);
	//*a= *a-(*b);
	int t=*a;
	*a=*b;
	*b=t;
	printf("a=%d, b=%d\n",*a,*b);
}