#include<stdio.h>
#include<string.h>
void concat(char arr[],char ccat[])
{
	strcat(arr,ccat);
} 
void copy(char newarr[],char oldarr[])
{
    strcpy(newarr,oldarr);
    puts(newarr);
}
int main()
{
	char pass[100];
	printf("enter your password:\n");
	gets(pass);
	char salt[]="123";
	char newpass[100];
	concat(pass,salt);
	copy(newpass,pass);
	return 0; 
}