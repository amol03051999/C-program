#include<stdio.h>
main()
{
	int a[3][3],i,j,sum;
	printf("\n enter a matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<=2;i++){
		sum=0;
		for(j=0;j<=2;j++)
		{
			sum=sum+a[i][j];
		}
		printf("\n the sum of elements of rows in a matrix=%d",sum);
	}
		for(i=0;i<=2;i++)
	{
		sum=0;
		for(j=0;j<=2;j++)
		{
			sum=sum+a[j][i];
		}
		printf("\n the sum of elements of columns in a matrix=%d",sum);
	}
		
	
}
