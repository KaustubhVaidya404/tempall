#include<stdio.h>

int main()
{
	int r, c, spr[20][20],tran[20][20],i,j;
	printf("Enter number of rows: \n");
	scanf("%d",&r);
	printf("Enter number of columns: \n");
	scanf("%d",&c);
	if(r==c)
	{
		printf("Enter elements in matrix: \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d\t",&spr[i][j]);
			}
		}
		printf("Entered sparse matrix is: \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",spr[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				tran[j][i]=spr[i][j];
			}
		}
		printf("Transpose of entered sparse matrix is \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",tran[j][i]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Enter rows and colums doesnot match..!!\nPlease try again:");
	}
	return 0;
}