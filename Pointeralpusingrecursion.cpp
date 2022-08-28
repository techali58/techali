#include<stdio.h>
void alp(char *c);
int main()
{
	char i='a';
	alp(&i);
	return 0;
}
void alp(char* c)
{
   if(*c=='z')
   {
   	return;
   }
   printf("%c\n",*c);
   *c=*c+1;
   alp(c);
}