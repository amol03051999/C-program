#include<stdio.h>
main()
{
	int a[3][3],i,j;
	printf("\n enter a matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
     printf("\n upper triangular matrix:\n");
	for(i=0;i<=2;i++){
		
		for(j=0;j<=2;j++)
		{if(i>j)
		{
				printf("%4d",0);
		}
		else
		{
				printf("%4d",a[i][j]);
		}
		}printf("\n");
	}
	printf("\n lower triangular matrix:\n");
		for(i=0;i<=2;i++){
		
		for(j=0;j<=2;j++)
		{if(i<j)
		{
			printf("%4d",0);
		}
		else
		{
			printf("%4d",a[i][j]);
		}
		}printf("\n");
	}
	
}
