#include<stdio.h>
void takevalue(int mat[2][2]);
void calc(int res[2][2],int mat1[2][2],int mat2[2][2]);
int main()
{
	int mat1[2][2],mat2[2][2],res[2][2];
	printf("enter elements of first matrix:\n");
	takevalue(mat1);
	printf("enter elements of second matrix:\n");
	takevalue(mat2);
	printf("result of matrix multiplication is:\n");
	calc(res,mat1,mat2);
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
void takevalue(int mat[2][2])
{
	for(int r=0;r<2;r++)
	{
		for(int c=0;c<2;c++)
		{
			scanf("%d",&mat[r][c]);
		}
		printf("\n");
	}
}
void calc(int res[2][2],int mat1[2][2],int mat2[2][2])
{
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
}