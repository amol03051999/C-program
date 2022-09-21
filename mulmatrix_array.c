#include<stdio.h>
main()
{
	int a[3][3],b[3][3],i,j,k,mul[3][3];
	printf("\n enter a matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("\n enter b matrix:\n");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n multiply of matrix:\n");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		mul[i][j]=0;
		for(k=0;k<=2;k++)
		{
			mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
		}
			
		}
	}
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("\t%d",mul[i][j]);
		}
		printf("\n");
	}
	
	
}
