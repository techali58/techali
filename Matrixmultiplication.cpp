#include<stdio.h>
int main()
{
	int mat1[2][2],mat2[2][2],res[2][2];
	printf("enter elements of first matrix:\n");
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<2;c++)
		{
			scanf("%d",&mat1[r][c]);
		}
		printf("\n");
	}
	printf("enter elements of second matrix:\n");
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<2;c++)
		{
			scanf("%d",&mat2[r][c]);
		}
		printf("\n");
	}
	printf("result of matrix multiplication is:\n");
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<2;c++)
		{
			res[r][c]=0;
			for(int var=0;var<2;var++)
			{
				res[r][c]=res[r][c]+mat1[r][var]*mat2[var][c];
			}
		
		}
	}
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<2;c++)
		{
			printf("%d ",res[r][c]);
		}
		printf("\n");
	}
	return 0; 
}