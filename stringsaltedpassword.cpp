#include<stdio.h>
#include<string.h>
int main()
{
	char pass[100];
	printf("enter your password:\n");
	gets(pass);
	char salt[]="123";
	strcat(pass,salt);
	char newpass[200];
	strcpy(newpass,pass);
	puts(newpass);
	return 0; 
}